#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ak_OneShot

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Ak_OneShot.Ak_OneShot_C.PlayAudio
// 0x00F0 (0x00F0 - 0x0000)
struct Ak_OneShot_C_PlayAudio final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED8[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           Ak;                                                // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 Owner;                                             // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3ED9[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue_1;           // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDA[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0030(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_AkEventLocationWithActor_AkComponent;     // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocationWithActor_Playing_ID;      // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDB[0x4];                                     // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDC[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AkGetComponent_ComponentCreated;          // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDD[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkGetComponent_AkComponent;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_2;                   // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_3;                   // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDE[0x3];                                     // 0x00A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_1;          // 0x00A4(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AkGetComponent_ComponentCreated_1;        // 0x00AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3EDF[0x3];                                     // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkGetComponent_AkComponent_1;             // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue_2;          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue_4;                   // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetSocketLocation_ReturnValue;            // 0x00C8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_AkEventLocationWithActor_AkComponent_1;   // 0x00E0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocationWithActor_Playing_ID_1;    // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShot_C_PlayAudio) == 0x000008, "Wrong alignment on Ak_OneShot_C_PlayAudio");
static_assert(sizeof(Ak_OneShot_C_PlayAudio) == 0x0000F0, "Wrong size on Ak_OneShot_C_PlayAudio");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, MeshComp) == 0x000000, "Member 'Ak_OneShot_C_PlayAudio::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, Success) == 0x000008, "Member 'Ak_OneShot_C_PlayAudio::Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, Ak) == 0x000010, "Member 'Ak_OneShot_C_PlayAudio::Ak' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, Owner) == 0x000018, "Member 'Ak_OneShot_C_PlayAudio::Owner' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventComponent_ReturnValue) == 0x000024, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventComponent_ReturnValue_1) == 0x000028, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventComponent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000030, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_K2_GetRootComponent_ReturnValue) == 0x000048, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventLocationWithActor_AkComponent) == 0x000050, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventLocationWithActor_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventLocationWithActor_Playing_ID) == 0x000058, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventLocationWithActor_Playing_ID' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetOwner_ReturnValue) == 0x000060, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_IsValid_ReturnValue_2) == 0x000068, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetOwner_ReturnValue_1) == 0x000070, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_Conv_StringToName_ReturnValue) == 0x000078, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkGetComponent_ComponentCreated) == 0x000080, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkGetComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkGetComponent_AkComponent) == 0x000088, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkGetComponent_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetOwner_ReturnValue_2) == 0x000090, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetOwner_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetOwner_ReturnValue_3) == 0x000098, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetOwner_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_IsValid_ReturnValue_3) == 0x0000A0, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_Conv_StringToName_ReturnValue_1) == 0x0000A4, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_Conv_StringToName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkGetComponent_ComponentCreated_1) == 0x0000AC, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkGetComponent_ComponentCreated_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkGetComponent_AkComponent_1) == 0x0000B0, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkGetComponent_AkComponent_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_Conv_StringToName_ReturnValue_2) == 0x0000B8, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_Conv_StringToName_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetOwner_ReturnValue_4) == 0x0000C0, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetOwner_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_GetSocketLocation_ReturnValue) == 0x0000C8, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_GetSocketLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventLocationWithActor_AkComponent_1) == 0x0000E0, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventLocationWithActor_AkComponent_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShot_C_PlayAudio, CallFunc_AkEventLocationWithActor_Playing_ID_1) == 0x0000E8, "Member 'Ak_OneShot_C_PlayAudio::CallFunc_AkEventLocationWithActor_Playing_ID_1' has a wrong offset!");

}

