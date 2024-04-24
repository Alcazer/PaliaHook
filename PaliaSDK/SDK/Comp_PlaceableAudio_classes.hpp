#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_PlaceableAudio

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "Struct_PersistentSound_structs.hpp"
#include "Palia_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass Comp_PlaceableAudio.Comp_PlaceableAudio_C
// 0x0120 (0x01C0 - 0x00A0)
class UComp_PlaceableAudio_C final  : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 Owner;                                             // 0x00A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULevelerComponent*                      LevelerComp;                                       // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkRoomComponent*                       AkRoom;                                            // 0x00B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkLateReverbComponent*                 AkReverb;                                          // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          RoomAlwaysEnabled;                                 // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4FBB[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UAkPortalComponent*>             Portals;                                           // 0x00D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             AudioHidden;                                       // 0x00E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             AudioShown;                                        // 0x00F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                 TrackedPersistantSounds;                           // 0x0100(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UAkComponent*, struct FStruct_PersistentSound> PersistantSoundMap;                                // 0x0110(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             ResumedLoop;                                       // 0x0160(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSet<class UAkCulledComponent*>               TrackedAkCulledComponents;                         // 0x0170(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

public:
	bool Am_I_Visible_On_Plot(class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void AudioHidden__DelegateSignature();
	void AudioShown__DelegateSignature();
	void EnableSpatialAudio(bool Enable);
	void ExecuteUbergraph_Comp_PlaceableAudio(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class ULevelerComponent* K2Node_CustomEvent_Leveler, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_CustomEvent_Enable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TDelegate<void(class AHousingOwnershipActor* HousingOwnershipActor, int32 NewId)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class UAkPortalComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, class AHousingOwnershipActor* K2Node_CustomEvent_HousingOwnershipActor, int32 K2Node_CustomEvent_NewId, TDelegate<void(class ULevelerComponent* Leveler)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue_1);
	void HandleOnActiveHousingSlotChanged(class AHousingOwnershipActor* HousingOwnershipActor, int32 NewId);
	void Hide();
	void LevelChanged(class ULevelerComponent* Leveler);
	int32 PlayPersistSound(class UAkAudioEvent* AkEvent, class UAkComponent* Component, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue);
	int32 PlayPersistSoundAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, class UAkComponent* CallFunc_AkEventLocation_AkComponent, int32 CallFunc_AkEventLocation_Playing_ID);
	int32 PlayPersistSoundLoop(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const TArray<class UAkAudioEvent*>& AudioEvents, int32 CallFunc_PlayPersistSound_ReturnValue, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound, TArray<class UAkAudioEvent*>& K2Node_MakeArray_Array, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound_1, const struct FStruct_PersistentSound& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	void PlayPersistSoundLoopCulled(class UAkCulledComponent* AkCulledComponent, const TArray<class UAkAudioEvent*>& AudioEvents, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue);
	void ReceiveBeginPlay();
	void ResumedLoop__DelegateSignature(int32 LoopId);
	void ResumePersistantLoops(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FStruct_PersistentSound& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UAkAudioEvent* CallFunc_Array_Get_Item_2, int32 CallFunc_PlayPersistSound_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class UAkComponent*>& CallFunc_Map_Keys_Keys, TArray<struct FStruct_PersistentSound>& CallFunc_Map_Values_Values);
	void ResumePersistantLoopsCulled(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSpatialComponents(class AActor* Actor, class ULevelerComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UAkPortalComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAkLateReverbComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAkRoomComponent* CallFunc_GetComponentByClass_ReturnValue_2);
	void Show();
	void StopPersistantLoops(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void StopPersistantLoopsCulled(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void StopPersistSoundLoop(class UAkComponent* Component, int32& PlayingID, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	void StopPersistSoundLoopCulled(class UAkCulledComponent* Component, int32 FadeDuration, bool CallFunc_Set_Remove_ReturnValue);
	void UpdateAudioVisibility();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Comp_PlaceableAudio_C">();
	}
	static class UComp_PlaceableAudio_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComp_PlaceableAudio_C>();
	}
};
static_assert(alignof(UComp_PlaceableAudio_C) == 0x000008, "Wrong alignment on UComp_PlaceableAudio_C");
static_assert(sizeof(UComp_PlaceableAudio_C) == 0x0001C0, "Wrong size on UComp_PlaceableAudio_C");
static_assert(offsetof(UComp_PlaceableAudio_C, UberGraphFrame) == 0x0000A0, "Member 'UComp_PlaceableAudio_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, Owner) == 0x0000A8, "Member 'UComp_PlaceableAudio_C::Owner' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, LevelerComp) == 0x0000B0, "Member 'UComp_PlaceableAudio_C::LevelerComp' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, AkRoom) == 0x0000B8, "Member 'UComp_PlaceableAudio_C::AkRoom' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, AkReverb) == 0x0000C0, "Member 'UComp_PlaceableAudio_C::AkReverb' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, RoomAlwaysEnabled) == 0x0000C8, "Member 'UComp_PlaceableAudio_C::RoomAlwaysEnabled' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, Portals) == 0x0000D0, "Member 'UComp_PlaceableAudio_C::Portals' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, AudioHidden) == 0x0000E0, "Member 'UComp_PlaceableAudio_C::AudioHidden' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, AudioShown) == 0x0000F0, "Member 'UComp_PlaceableAudio_C::AudioShown' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, TrackedPersistantSounds) == 0x000100, "Member 'UComp_PlaceableAudio_C::TrackedPersistantSounds' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, PersistantSoundMap) == 0x000110, "Member 'UComp_PlaceableAudio_C::PersistantSoundMap' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, ResumedLoop) == 0x000160, "Member 'UComp_PlaceableAudio_C::ResumedLoop' has a wrong offset!");
static_assert(offsetof(UComp_PlaceableAudio_C, TrackedAkCulledComponents) == 0x000170, "Member 'UComp_PlaceableAudio_C::TrackedAkCulledComponents' has a wrong offset!");

}

