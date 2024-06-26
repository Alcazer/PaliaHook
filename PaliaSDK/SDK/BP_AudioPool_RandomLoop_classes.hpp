#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioPool_RandomLoop

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "BP_AudioPool_StaticLoop_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AudioPool_RandomLoop.BP_AudioPool_RandomLoop_C
// 0x0000 (0x0300 - 0x0300)
class ABP_AudioPool_RandomLoop_C final  : public ABP_AudioPool_StaticLoop_C
{
public:
	void DebugLine(const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
	void StartSound(class ABP_Env_Audio_Pool_Base_C* PoolObject, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1, TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAssociatedAkEvent_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AudioPool_RandomLoop_C">();
	}
	static class ABP_AudioPool_RandomLoop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AudioPool_RandomLoop_C>();
	}
};
static_assert(alignof(ABP_AudioPool_RandomLoop_C) == 0x000008, "Wrong alignment on ABP_AudioPool_RandomLoop_C");
static_assert(sizeof(ABP_AudioPool_RandomLoop_C) == 0x000300, "Wrong size on ABP_AudioPool_RandomLoop_C");

}

