#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0xA0 - 0x38)
// BlueprintGeneratedClass Ak_SurfaceEffect.Ak_SurfaceEffect_C
class UAk_SurfaceEffect_C : public UAnimNotify
{
public:
	class UDataTable*                            DataTable;                                         // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Attach_Name;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TraceForward;                                      // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlaySound;                                         // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayVFX;                                           // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CharacterMappingOverride;                          // 0x4C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Trace_Start;                                       // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TraceEnd;                                          // 0x60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AttachVFX;                                         // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OffsetPosition_VFX;                                // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OffsetRotation_VFX;                                // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAk_SurfaceEffect_C* GetDefaultObj();

	void GetTraceParams(class USceneComponent* Mesh, double TraceStartOffset, double TraceEndOffset, struct FVector* Start, struct FVector* End, const struct FVector& AttachLocation, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void SetStoredPhysmat(class UPhysicalMaterial* PM, class UComp_Actor_Audio_Data_C* AudioData, bool CallFunc_IsValid_ReturnValue);
	void PlayerTraceForMaterial(class USkeletalMeshComponent* Mesh, class UPhysicalMaterial** Material, struct FVector* Loc, const struct FVector& Location, class UPhysicalMaterial* PM, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_GetTraceParams_Start, const struct FVector& CallFunc_GetTraceParams_End, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, class FName CallFunc_BreakHitResult_BoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1);
	void GetDataTable(class AActor* Actor, class UDataTable** DataTable, bool CallFunc_NotEqual_NameName_ReturnValue, class UComp_CreatureAudio_C* CallFunc_GetComponentByClass_ReturnValue, class UDataTable* CallFunc_FindInCreatureSurfaceMap_Value, bool CallFunc_FindInCreatureSurfaceMap_Found, bool CallFunc_IsValid_ReturnValue);
	void SetLastPhysmat(class UComp_Actor_Audio_Data_C* AudioData, class UPhysicalMaterial* PmIn, class UPhysicalMaterial** PmOut, class UPhysicalMaterial* PMLocal, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	bool CheckForWater(class USkeletalMeshComponent* Mesh, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Array_Index_Variable, class AValeriaMoveablePawn* K2Node_DynamicCast_AsValeria_Moveable_Pawn, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& Temp_object_Variable_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_1, bool CallFunc_CapsuleOverlapActors_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AStaticMeshActor* K2Node_DynamicCast_AsStatic_Mesh_Actor, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPhysicalMaterial* CallFunc_GetPhysicalMaterial_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_2, bool CallFunc_CapsuleOverlapActors_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue);
	double GetMaxSpeed(class UActorComponent* Target, class AActor* CallFunc_GetOwner_ReturnValue, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class ACreatureCharacter* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* K2Node_DynamicCast_AsValeria_Character_Move_Component, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_CalculateMaxSpeed_ReturnValue, float CallFunc_GetMaxSpeedAbs_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void SetPhysmatData(class UDataTable* DataTable, class UObject* PhysMat, class UAkAudioEvent** Sound, class UMaterialInstance** Decal_Left_Foot, class UMaterialInstance** Decal_Right_Foot, class UNiagaraSystem** NiagaraSystem, enum class EPhysicalSurface DefaultPhysmatEditorAudition, class FName RowNamePhysmat, enum class EPhysicalSurface DefaultPhysmatInGame, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const class FString& CallFunc_RightChop_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FStruct_Physmat& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UNiagaraSystem* NiagaraSystem, bool WaterOverride, double MinSpeed, class UComp_Actor_Audio_Data_C* CompActorAudio, const struct FVector& SoundOffset, double Speed, double MaxSpeed, class UMaterialInstance* DecalMatRight, class UMaterialInstance* DecalMatLeft, class FName RowNamePhysmat, class UDecalComponent* DecalComp, double DecalFadeOutDuration, double DecalFadeOutStartDelay, double DecalFadeInDuration, double DecalFadeInStartDelay, const struct FVector& DecalOffset, double DecalRandomRotationMax, double DecalRandomSizeMax, double DecalSize, class UMaterialInstance* DecalMat, class UAkComponent* SpawnedAkComponent, class UAkAudioEvent* Sound, class UValeriaCharacterMoveComponent* CharacterMovementComponent, const struct FVector& SocketLocation, class UPhysicalMaterial* PM, class USkeletalMeshComponent* Mesh, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class UPhysicalMaterial* CallFunc_PlayerTraceForMaterial_Material, const struct FVector& CallFunc_PlayerTraceForMaterial_Loc, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetTraceParams_Start, const struct FVector& CallFunc_GetTraceParams_End, class AActor* CallFunc_GetOwner_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AActor* CallFunc_GetOwner_ReturnValue_3, class UDataTable* CallFunc_GetDataTable_DataTable, bool CallFunc_CheckForWater_ReturnValue, class UAkAudioEvent* CallFunc_Surface_DT_Sound, class UMaterialInstance* CallFunc_Surface_DT_Decal_Left_Foot, class UMaterialInstance* CallFunc_Surface_DT_Decal_Right_Foot, class UNiagaraSystem* CallFunc_Surface_DT_NiagaraSystem, double CallFunc_GetMaxSpeed_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_4, bool CallFunc_GetAutoDestroy_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_IsWithinAttenuation_Within, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class AActor* CallFunc_GetOwner_ReturnValue_5, bool CallFunc_Try_to_Propagate_Rtpcs_Success, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_PostEventAtLocation_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue_6, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_VSize_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_6, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromXZ_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_7, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue_1, FDelegateProperty_ Temp_delegate_Variable, class AActor* CallFunc_GetOwner_ReturnValue_8, class UComp_Actor_Audio_Data_C* CallFunc_GetComponentByClass_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_8, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_10, class UAkComponent* CallFunc_AkSpawnAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, float CallFunc_SetRTPCValue_Value_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_SetRTPCValue_Value_ImplicitCast_1, float CallFunc_SetFadeOut_Duration_ImplicitCast, float CallFunc_SetFadeOut_StartDelay_ImplicitCast, float CallFunc_SetFadeIn_Duaration_ImplicitCast, float CallFunc_SetFadeIn_StartDelay_ImplicitCast);
};

}


