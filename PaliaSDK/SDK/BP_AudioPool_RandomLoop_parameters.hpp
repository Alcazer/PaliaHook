#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AudioPool_RandomLoop

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_AudioPool_RandomLoop.BP_AudioPool_RandomLoop_C.DebugLine
// 0x0060 (0x0060 - 0x0000)
struct BP_AudioPool_RandomLoop_C_DebugLine final 
{
public:
	struct FVector                                CallFunc_GetValeriaAudioListenerPosition_OutLocation; // 0x0000(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetValeriaAudioListenerPosition_OutFrontDir; // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetValeriaAudioListenerPosition_OutRightDir; // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0048(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioPool_RandomLoop_C_DebugLine) == 0x000008, "Wrong alignment on BP_AudioPool_RandomLoop_C_DebugLine");
static_assert(sizeof(BP_AudioPool_RandomLoop_C_DebugLine) == 0x000060, "Wrong size on BP_AudioPool_RandomLoop_C_DebugLine");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_DebugLine, CallFunc_GetValeriaAudioListenerPosition_OutLocation) == 0x000000, "Member 'BP_AudioPool_RandomLoop_C_DebugLine::CallFunc_GetValeriaAudioListenerPosition_OutLocation' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_DebugLine, CallFunc_GetValeriaAudioListenerPosition_OutFrontDir) == 0x000018, "Member 'BP_AudioPool_RandomLoop_C_DebugLine::CallFunc_GetValeriaAudioListenerPosition_OutFrontDir' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_DebugLine, CallFunc_GetValeriaAudioListenerPosition_OutRightDir) == 0x000030, "Member 'BP_AudioPool_RandomLoop_C_DebugLine::CallFunc_GetValeriaAudioListenerPosition_OutRightDir' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_DebugLine, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000048, "Member 'BP_AudioPool_RandomLoop_C_DebugLine::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");

// Function BP_AudioPool_RandomLoop.BP_AudioPool_RandomLoop_C.StartSound
// 0x0230 (0x0230 - 0x0000)
struct BP_AudioPool_RandomLoop_C_StartSound final 
{
public:
	class ABP_Env_Audio_Pool_Base_C*              PoolObject;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455C[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0010(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x0028(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue;          // 0x0110(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0111(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455D[0x6];                                     // 0x0112(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FHitResult                             CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x0118(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                          CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455E[0x3];                                     // 0x0201(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0204(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_455F[0x4];                                     // 0x0214(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0218(0x0010)(ConstParm, ReferenceParm)
	int32                                         CallFunc_PostAssociatedAkEvent_ReturnValue;        // 0x0228(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AudioPool_RandomLoop_C_StartSound) == 0x000008, "Wrong alignment on BP_AudioPool_RandomLoop_C_StartSound");
static_assert(sizeof(BP_AudioPool_RandomLoop_C_StartSound) == 0x000230, "Wrong size on BP_AudioPool_RandomLoop_C_StartSound");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, PoolObject) == 0x000000, "Member 'BP_AudioPool_RandomLoop_C_StartSound::PoolObject' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000010, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_K2_SetActorLocation_SweepHitResult) == 0x000028, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_K2_SetActorLocation_SweepHitResult' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_K2_SetActorLocation_ReturnValue) == 0x000110, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_K2_SetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000111, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_K2_SetActorLocation_SweepHitResult_1) == 0x000118, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_K2_SetActorLocation_SweepHitResult_1' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_K2_SetActorLocation_ReturnValue_1) == 0x000200, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_K2_SetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, Temp_delegate_Variable) == 0x000204, "Member 'BP_AudioPool_RandomLoop_C_StartSound::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, Temp_struct_Variable) == 0x000218, "Member 'BP_AudioPool_RandomLoop_C_StartSound::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(BP_AudioPool_RandomLoop_C_StartSound, CallFunc_PostAssociatedAkEvent_ReturnValue) == 0x000228, "Member 'BP_AudioPool_RandomLoop_C_StartSound::CallFunc_PostAssociatedAkEvent_ReturnValue' has a wrong offset!");

}
