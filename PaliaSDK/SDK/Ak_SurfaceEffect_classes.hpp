#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ak_SurfaceEffect

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"
#include "Enum_core_Scalability_structs.hpp"
#include "Palia_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Ak_SurfaceEffect.Ak_SurfaceEffect_C
// 0x0080 (0x00B8 - 0x0038)
class UAk_SurfaceEffect_C final  : public UAnimNotify
{
public:
	class UPhysmatEffect_C*                       PhysmatEffects;                                    // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   Attach_Name;                                       // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TraceForward;                                      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlaySound;                                         // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PlayVFX;                                           // 0x004A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BE[0x1];                                     // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CharacterMappingOverride;                          // 0x004C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45BF[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        Trace_Start;                                       // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        TraceEnd;                                          // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AttachVFX;                                         // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45C0[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                OffsetPosition_VFX;                                // 0x0070(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               OffsetRotation_VFX;                                // 0x0088(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        MaxCullDistance;                                   // 0x00A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxCullDistanceVFX;                                // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        MaxCullDistanceDecals;                             // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool CheckForWater(class USkeletalMeshComponent* Mesh, struct FVector* Location, double HalfHeightMinusRad, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaMoveablePawn* K2Node_DynamicCast_AsValeria_Moveable_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMulti_OutHits, bool CallFunc_SphereTraceMulti_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast) const;
	double GetMaxSpeed(class UActorComponent* Target, class UMovementComponent* MovementComp, class AActor* NewLocalVar, class AActor* CallFunc_GetOwner_ReturnValue, class ACreatureCharacter* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* K2Node_DynamicCast_AsValeria_Character_Move_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_CalculateMaxSpeed_ReturnValue, float CallFunc_GetMaxSpeedAbs_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast) const;
	void GetPhysmatEffectData(class AActor* Actor, class UPhysmatEffect_C** PhysmatEffect, bool CallFunc_NotEqual_NameName_ReturnValue, class UComp_CreatureAudio_C* CallFunc_GetComponentByClass_ReturnValue, class UPhysmatEffect_C* CallFunc_FindInCreatureSurfaceMap_Value, bool CallFunc_FindInCreatureSurfaceMap_Found, bool CallFunc_IsValid_ReturnValue) const;
	void GetTraceParams(class USceneComponent* Mesh, double TraceStartOffset, double TraceEndOffset, struct FVector* Start, struct FVector* End, const struct FVector& AttachLocation, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue) const;
	void PlayerTraceForMaterial(class USkeletalMeshComponent* Mesh, class UPhysicalMaterial** Material, struct FVector* Loc, const struct FVector& Location, class UPhysicalMaterial* PM, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_SelectVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetTraceParams_Start, const struct FVector& CallFunc_GetTraceParams_End, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1) const;
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const struct FRotator& VFXRotator, class UVAL_CharacterCustomizationComponent* ValeriaCharacterCustomizationComponent, class AActor* MeshOwner, class UMovementComponent* MovementComp, bool IsLocallyControlled, double EffectQualityDistanceModifier, double DistanceToAudioListener, class UNiagaraSystem* NiagaraSystem, double MinSpeed, class UComp_Actor_Audio_Data_C* CompActorAudio, const struct FVector& SoundOffset, double Speed, double MaxSpeed, class UMaterialInstance* DecalMatRight, class UMaterialInstance* DecalMatLeft, class FName RowNamePhysmat, class UDecalComponent* DecalComp, double DecalFadeOutDuration, double DecalFadeOutStartDelay, double DecalFadeInDuration, double DecalFadeInStartDelay, const struct FVector& DecalOffset, double DecalRandomRotationMax, double DecalRandomSizeMax, double DecalSize, class UMaterialInstance* DecalMat, class UAkComponent* SpawnedAkComponent, class UAkAudioEvent* Sound, class UValeriaCharacterMoveComponent* CharacterMovementComponent, const struct FVector& SocketLocation, class UPhysicalMaterial* PM, class USkeletalMeshComponent* Mesh, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_TryPlayCharacterCustomizationFootstepEffect_ShouldPlayDefaultNiagaraEffect, class UPhysicalMaterial* CallFunc_RemoteTraceForMaterial_Material, const struct FVector& CallFunc_RemoteTraceForMaterial_Loc, class UComp_Actor_Audio_Data_C* CallFunc_GetComponentByClass_ReturnValue, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsLocallyControlled_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class UPhysmatEffect_C* CallFunc_GetPhysmatEffectData_PhysmatEffect, const struct FStruct_Physmat& CallFunc_GetSurfaceEffect_Value, bool CallFunc_GetSurfaceEffect_ReturnValue, Enum_core_Scalability CallFunc_GlobalScalabilitySetting_ScalabilitySetting, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Try_to_Propagate_Rtpcs_Success, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsWithinAttenuation_Within, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_GetAkComponent_ComponentCreated, class UAkComponent* CallFunc_GetAkComponent_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UPhysicalMaterial* CallFunc_PlayerTraceForMaterial_Material, const struct FVector& CallFunc_PlayerTraceForMaterial_Loc, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, int32 CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast, float CallFunc_SetFadeOut_Duration_ImplicitCast, float CallFunc_SetFadeOut_StartDelay_ImplicitCast, float CallFunc_SetFadeIn_Duration_ImplicitCast, float CallFunc_SetFadeIn_StartDelay_ImplicitCast) const;
	void RemoteTraceForMaterial(class USceneComponent* Mesh, class UPhysicalMaterial** Material, struct FVector* Loc, class UPhysicalMaterial* PM, const struct FVector& Location, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetTraceParams_Start, const struct FVector& CallFunc_GetTraceParams_End, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue) const;
	void SetStoredPhysmat(class UPhysicalMaterial* PM, class UComp_Actor_Audio_Data_C* AudioData, bool CallFunc_IsValid_ReturnValue) const;
	void TryPlayCharacterCustomizationFootstepEffect(struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UObject* Object, bool* ShouldPlayDefaultNiagaraEffect, class UVAL_CharacterCustomizationComponent* ValeriaCharacterCustomizationComponent, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, EVAL_FootprintEffectType CallFunc_SpawnCustomFootprintEffects_ReturnValue, bool CallFunc_HasCustomFootprintEffects_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Ak_SurfaceEffect_C">();
	}
	static class UAk_SurfaceEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAk_SurfaceEffect_C>();
	}
};
static_assert(alignof(UAk_SurfaceEffect_C) == 0x000008, "Wrong alignment on UAk_SurfaceEffect_C");
static_assert(sizeof(UAk_SurfaceEffect_C) == 0x0000B8, "Wrong size on UAk_SurfaceEffect_C");
static_assert(offsetof(UAk_SurfaceEffect_C, PhysmatEffects) == 0x000038, "Member 'UAk_SurfaceEffect_C::PhysmatEffects' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, Attach_Name) == 0x000040, "Member 'UAk_SurfaceEffect_C::Attach_Name' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, TraceForward) == 0x000048, "Member 'UAk_SurfaceEffect_C::TraceForward' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, PlaySound) == 0x000049, "Member 'UAk_SurfaceEffect_C::PlaySound' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, PlayVFX) == 0x00004A, "Member 'UAk_SurfaceEffect_C::PlayVFX' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, CharacterMappingOverride) == 0x00004C, "Member 'UAk_SurfaceEffect_C::CharacterMappingOverride' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, Trace_Start) == 0x000058, "Member 'UAk_SurfaceEffect_C::Trace_Start' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, TraceEnd) == 0x000060, "Member 'UAk_SurfaceEffect_C::TraceEnd' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, AttachVFX) == 0x000068, "Member 'UAk_SurfaceEffect_C::AttachVFX' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, OffsetPosition_VFX) == 0x000070, "Member 'UAk_SurfaceEffect_C::OffsetPosition_VFX' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, OffsetRotation_VFX) == 0x000088, "Member 'UAk_SurfaceEffect_C::OffsetRotation_VFX' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, MaxCullDistance) == 0x0000A0, "Member 'UAk_SurfaceEffect_C::MaxCullDistance' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, MaxCullDistanceVFX) == 0x0000A8, "Member 'UAk_SurfaceEffect_C::MaxCullDistanceVFX' has a wrong offset!");
static_assert(offsetof(UAk_SurfaceEffect_C, MaxCullDistanceDecals) == 0x0000B0, "Member 'UAk_SurfaceEffect_C::MaxCullDistanceDecals' has a wrong offset!");

}

