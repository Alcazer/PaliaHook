#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioPool_OneShot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AudioPool_OneShot.BP_AudioPool_OneShot_C
// 0x0088 (0x0328 - 0x02A0)
class ABP_AudioPool_OneShot_C final  : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LoopAudioTimeline__Direction_9901FD4B4BFF2C02589153A9710DD815; // 0x02B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA6[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LoopAudioTimeline;                                 // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UComp_Audio_Pool_Manager_C*             PoolManager;                                       // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                                NewLocation;                                       // 0x02C8(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        InitialStartDelayMin;                              // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        InitialStartDelayMax;                              // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        MinRetriggerTime;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                        MaxRetriggerTime;                                  // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAkAudioEvent*                          CurrentEvent;                                      // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          Debug;                                             // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsPlaying;                                         // 0x0309(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsActive;                                          // 0x030A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA7[0x1];                                     // 0x030B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         AkEventID;                                         // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3CA8[0x4];                                     // 0x0314(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           EventTimer;                                        // 0x0318(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Env_Audio_Pool_Base_C*              Random;                                            // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void AudioDebugFoliage(bool On);
	void EndEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void ExecuteUbergraph_BP_AudioPool_OneShot(int32 EntryPoint, double CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_GetCritterValidFoliage_CritterValidFoliage, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> K2Node_CreateDelegate_OutputDelegate, EAkCallbackType K2Node_CustomEvent_CallbackType, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_GetIsInfinite_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, bool K2Node_CustomEvent_On, bool CallFunc_IsWithinAttenuation_Within, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_SelectString_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float K2Node_Event_DeltaSeconds, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_SetTimelineLength_NewLength_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
	void LoopAudioTimeline__FinishedFunc();
	void LoopAudioTimeline__UpdateFunc();
	void PlaySound();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AudioPool_OneShot_C">();
	}
	static class ABP_AudioPool_OneShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AudioPool_OneShot_C>();
	}
};
static_assert(alignof(ABP_AudioPool_OneShot_C) == 0x000008, "Wrong alignment on ABP_AudioPool_OneShot_C");
static_assert(sizeof(ABP_AudioPool_OneShot_C) == 0x000328, "Wrong size on ABP_AudioPool_OneShot_C");
static_assert(offsetof(ABP_AudioPool_OneShot_C, UberGraphFrame) == 0x0002A0, "Member 'ABP_AudioPool_OneShot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, DefaultSceneRoot) == 0x0002A8, "Member 'ABP_AudioPool_OneShot_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, LoopAudioTimeline__Direction_9901FD4B4BFF2C02589153A9710DD815) == 0x0002B0, "Member 'ABP_AudioPool_OneShot_C::LoopAudioTimeline__Direction_9901FD4B4BFF2C02589153A9710DD815' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, LoopAudioTimeline) == 0x0002B8, "Member 'ABP_AudioPool_OneShot_C::LoopAudioTimeline' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, PoolManager) == 0x0002C0, "Member 'ABP_AudioPool_OneShot_C::PoolManager' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, NewLocation) == 0x0002C8, "Member 'ABP_AudioPool_OneShot_C::NewLocation' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, InitialStartDelayMin) == 0x0002E0, "Member 'ABP_AudioPool_OneShot_C::InitialStartDelayMin' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, InitialStartDelayMax) == 0x0002E8, "Member 'ABP_AudioPool_OneShot_C::InitialStartDelayMax' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, MinRetriggerTime) == 0x0002F0, "Member 'ABP_AudioPool_OneShot_C::MinRetriggerTime' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, MaxRetriggerTime) == 0x0002F8, "Member 'ABP_AudioPool_OneShot_C::MaxRetriggerTime' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, CurrentEvent) == 0x000300, "Member 'ABP_AudioPool_OneShot_C::CurrentEvent' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, Debug) == 0x000308, "Member 'ABP_AudioPool_OneShot_C::Debug' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, IsPlaying) == 0x000309, "Member 'ABP_AudioPool_OneShot_C::IsPlaying' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, IsActive) == 0x00030A, "Member 'ABP_AudioPool_OneShot_C::IsActive' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, ID) == 0x00030C, "Member 'ABP_AudioPool_OneShot_C::ID' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, AkEventID) == 0x000310, "Member 'ABP_AudioPool_OneShot_C::AkEventID' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, EventTimer) == 0x000318, "Member 'ABP_AudioPool_OneShot_C::EventTimer' has a wrong offset!");
static_assert(offsetof(ABP_AudioPool_OneShot_C, Random) == 0x000320, "Member 'ABP_AudioPool_OneShot_C::Random' has a wrong offset!");

}

