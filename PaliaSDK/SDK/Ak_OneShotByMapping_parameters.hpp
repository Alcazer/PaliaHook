#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Ak_OneShotByMapping

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.FindAudioMapping
// 0x00B8 (0x00B8 - 0x0000)
struct Ak_OneShotByMapping_C_FindAudioMapping final 
{
public:
	class UAbilityAnimationComponent*             AbilityAnimComp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   MappingQualifier;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAudioMappingConfig                    ReturnValue;                                       // 0x0010(0x0038)(Parm, OutParm, ReturnParm)
	class UDataTable*                             MappingTable;                                      // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UDataTable*                             CallFunc_Map_Find_Value;                           // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E0F[0x3];                                     // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x006C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E10[0x4];                                     // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FAudioMappingConfig                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0078(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShotByMapping_C_FindAudioMapping) == 0x000008, "Wrong alignment on Ak_OneShotByMapping_C_FindAudioMapping");
static_assert(sizeof(Ak_OneShotByMapping_C_FindAudioMapping) == 0x0000B8, "Wrong size on Ak_OneShotByMapping_C_FindAudioMapping");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, AbilityAnimComp) == 0x000000, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::AbilityAnimComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, MappingQualifier) == 0x000008, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::MappingQualifier' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, ReturnValue) == 0x000010, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, MappingTable) == 0x000048, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::MappingTable' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000050, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_Map_Find_Value) == 0x000060, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_Map_Find_ReturnValue) == 0x000068, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_Conv_StringToName_ReturnValue) == 0x00006C, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_GetDataTableRowFromName_OutRow) == 0x000078, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000B0, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_FindAudioMapping, CallFunc_IsValid_ReturnValue) == 0x0000B1, "Member 'Ak_OneShotByMapping_C_FindAudioMapping::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.GetNotifyName
// 0x0030 (0x0030 - 0x0000)
struct Ak_OneShotByMapping_C_GetNotifyName final 
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShotByMapping_C_GetNotifyName) == 0x000008, "Wrong alignment on Ak_OneShotByMapping_C_GetNotifyName");
static_assert(sizeof(Ak_OneShotByMapping_C_GetNotifyName) == 0x000030, "Wrong size on Ak_OneShotByMapping_C_GetNotifyName");
static_assert(offsetof(Ak_OneShotByMapping_C_GetNotifyName, ReturnValue) == 0x000000, "Member 'Ak_OneShotByMapping_C_GetNotifyName::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_GetNotifyName, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000010, "Member 'Ak_OneShotByMapping_C_GetNotifyName::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_GetNotifyName, CallFunc_Concat_StrStr_ReturnValue) == 0x000020, "Member 'Ak_OneShotByMapping_C_GetNotifyName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");

// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.PlayAudio
// 0x01E0 (0x01E0 - 0x0000)
struct Ak_OneShotByMapping_C_PlayAudio final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachLocation                               AttachRule;                                        // 0x0009(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E11[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AttachOffset;                                      // 0x0010(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0030(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAnimationComponent*             AbilityAnimComp;                                   // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          SuccessfulPlay;                                    // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E12[0x3];                                     // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E13[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAbilityAnimationComponent*             CallFunc_GetAbilityAnimation_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E14[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue_1;                   // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AkGetComponent_ComponentCreated;          // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E15[0x2];                                     // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkGetComponent_AkComponent;               // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E16[0x4];                                     // 0x008C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x0090(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E17[0x7];                                     // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0140(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_AkEventLocationWithActor_AkComponent;     // 0x0158(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocationWithActor_Playing_ID;      // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E18[0x4];                                     // 0x0164(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0168(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAudioMappingConfig                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0180(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E19[0x7];                                     // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x01C0(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x01D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01D8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01DC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAudioMappingHelper_Success;           // 0x01DD(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAudioMappingHelper_Success_1;         // 0x01DE(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x01DF(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShotByMapping_C_PlayAudio) == 0x000010, "Wrong alignment on Ak_OneShotByMapping_C_PlayAudio");
static_assert(sizeof(Ak_OneShotByMapping_C_PlayAudio) == 0x0001E0, "Wrong size on Ak_OneShotByMapping_C_PlayAudio");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, MeshComp) == 0x000000, "Member 'Ak_OneShotByMapping_C_PlayAudio::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, Success) == 0x000008, "Member 'Ak_OneShotByMapping_C_PlayAudio::Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, AttachRule) == 0x000009, "Member 'Ak_OneShotByMapping_C_PlayAudio::AttachRule' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, AttachOffset) == 0x000010, "Member 'Ak_OneShotByMapping_C_PlayAudio::AttachOffset' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, SocketName) == 0x000028, "Member 'Ak_OneShotByMapping_C_PlayAudio::SocketName' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, AkEvent) == 0x000030, "Member 'Ak_OneShotByMapping_C_PlayAudio::AkEvent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, AbilityAnimComp) == 0x000038, "Member 'Ak_OneShotByMapping_C_PlayAudio::AbilityAnimComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, SuccessfulPlay) == 0x000040, "Member 'Ak_OneShotByMapping_C_PlayAudio::SuccessfulPlay' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, Temp_int_Array_Index_Variable) == 0x000044, "Member 'Ak_OneShotByMapping_C_PlayAudio::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetOwner_ReturnValue) == 0x000048, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, K2Node_DynamicCast_AsValeria_Character) == 0x000050, "Member 'Ak_OneShotByMapping_C_PlayAudio::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'Ak_OneShotByMapping_C_PlayAudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetAbilityAnimation_ReturnValue) == 0x000060, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetAbilityAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'Ak_OneShotByMapping_C_PlayAudio::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetOwner_ReturnValue_1) == 0x000070, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetOwner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Add_IntInt_ReturnValue) == 0x000078, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_AkGetComponent_ComponentCreated) == 0x00007D, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_AkGetComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_AkGetComponent_AkComponent) == 0x000080, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_AkGetComponent_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_AkEventComponent_ReturnValue) == 0x000088, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetSocketTransform_ReturnValue) == 0x000090, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_IsValid_ReturnValue_1) == 0x0000F0, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_BreakTransform_Location) == 0x0000F8, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_BreakTransform_Rotation) == 0x000110, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_BreakTransform_Scale) == 0x000128, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Add_VectorVector_ReturnValue) == 0x000140, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_AkEventLocationWithActor_AkComponent) == 0x000158, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_AkEventLocationWithActor_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_AkEventLocationWithActor_Playing_ID) == 0x000160, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_AkEventLocationWithActor_Playing_ID' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000168, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Conv_StringToName_ReturnValue) == 0x000178, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetDataTableRowFromName_OutRow) == 0x000180, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0001B8, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Map_Keys_Keys) == 0x0001C0, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Array_Get_Item) == 0x0001D0, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Array_Length_ReturnValue) == 0x0001D8, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_Less_IntInt_ReturnValue) == 0x0001DC, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_PlayAudioMappingHelper_Success) == 0x0001DD, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_PlayAudioMappingHelper_Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_PlayAudioMappingHelper_Success_1) == 0x0001DE, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_PlayAudioMappingHelper_Success_1' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudio, CallFunc_NotEqual_NameName_ReturnValue) == 0x0001DF, "Member 'Ak_OneShotByMapping_C_PlayAudio::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");

// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.PlayAudioMappingHelper
// 0x0180 (0x0180 - 0x0000)
struct Ak_OneShotByMapping_C_PlayAudioMappingHelper final 
{
public:
	class UAbilityAnimationComponent*             AbilityAnimComp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        AttachToComponent;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                   MappingQualifier;                                  // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Success;                                           // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAttachLocation                               AttachRule;                                        // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1A[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                AttachOffset;                                      // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   SocketName;                                        // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          AkEvent;                                           // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAudioMappingConfig                    CallFunc_FindAudioMapping_ReturnValue;             // 0x0048(0x0038)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1B[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_AkGetComponent_ComponentCreated;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1C[0x7];                                     // 0x0091(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkComponent*                           CallFunc_AkGetComponent_AkComponent;               // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTransform                             CallFunc_GetSocketTransform_ReturnValue;           // 0x00A0(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventComponent_ReturnValue;             // 0x0100(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3E1D[0x4];                                     // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_BreakTransform_Location;                  // 0x0108(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_BreakTransform_Rotation;                  // 0x0120(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakTransform_Scale;                     // 0x0138(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x0150(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                           CallFunc_AkEventLocationWithActor_AkComponent;     // 0x0168(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventLocationWithActor_Playing_ID;      // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShotByMapping_C_PlayAudioMappingHelper) == 0x000010, "Wrong alignment on Ak_OneShotByMapping_C_PlayAudioMappingHelper");
static_assert(sizeof(Ak_OneShotByMapping_C_PlayAudioMappingHelper) == 0x000180, "Wrong size on Ak_OneShotByMapping_C_PlayAudioMappingHelper");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, AbilityAnimComp) == 0x000000, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::AbilityAnimComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, AttachToComponent) == 0x000008, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::AttachToComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, MappingQualifier) == 0x000010, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::MappingQualifier' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, Success) == 0x000018, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::Success' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, AttachRule) == 0x000019, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::AttachRule' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, AttachOffset) == 0x000020, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::AttachOffset' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, SocketName) == 0x000038, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::SocketName' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, AkEvent) == 0x000040, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::AkEvent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_FindAudioMapping_ReturnValue) == 0x000048, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_FindAudioMapping_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_IsValid_ReturnValue) == 0x000080, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_GetOwner_ReturnValue) == 0x000088, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_AkGetComponent_ComponentCreated) == 0x000090, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_AkGetComponent_ComponentCreated' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_AkGetComponent_AkComponent) == 0x000098, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_AkGetComponent_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_GetSocketTransform_ReturnValue) == 0x0000A0, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_GetSocketTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_AkEventComponent_ReturnValue) == 0x000100, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_AkEventComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_BreakTransform_Location) == 0x000108, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_BreakTransform_Location' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_BreakTransform_Rotation) == 0x000120, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_BreakTransform_Rotation' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_BreakTransform_Scale) == 0x000138, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_BreakTransform_Scale' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_Add_VectorVector_ReturnValue) == 0x000150, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_AkEventLocationWithActor_AkComponent) == 0x000168, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_AkEventLocationWithActor_AkComponent' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_PlayAudioMappingHelper, CallFunc_AkEventLocationWithActor_Playing_ID) == 0x000170, "Member 'Ak_OneShotByMapping_C_PlayAudioMappingHelper::CallFunc_AkEventLocationWithActor_Playing_ID' has a wrong offset!");

// Function Ak_OneShotByMapping.Ak_OneShotByMapping_C.Received_Notify
// 0x0040 (0x0040 - 0x0000)
struct Ak_OneShotByMapping_C_Received_Notify final 
{
public:
	class USkeletalMeshComponent*                 MeshComp;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAnimNotifyEventReference              EventReference;                                    // 0x0010(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          ReturnValue;                                       // 0x0038(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDedicatedServer_ReturnValue;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayAudio_Success;                        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Ak_OneShotByMapping_C_Received_Notify) == 0x000008, "Wrong alignment on Ak_OneShotByMapping_C_Received_Notify");
static_assert(sizeof(Ak_OneShotByMapping_C_Received_Notify) == 0x000040, "Wrong size on Ak_OneShotByMapping_C_Received_Notify");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, MeshComp) == 0x000000, "Member 'Ak_OneShotByMapping_C_Received_Notify::MeshComp' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, Animation) == 0x000008, "Member 'Ak_OneShotByMapping_C_Received_Notify::Animation' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, EventReference) == 0x000010, "Member 'Ak_OneShotByMapping_C_Received_Notify::EventReference' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, ReturnValue) == 0x000038, "Member 'Ak_OneShotByMapping_C_Received_Notify::ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, CallFunc_IsDedicatedServer_ReturnValue) == 0x000039, "Member 'Ak_OneShotByMapping_C_Received_Notify::CallFunc_IsDedicatedServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(Ak_OneShotByMapping_C_Received_Notify, CallFunc_PlayAudio_Success) == 0x00003A, "Member 'Ak_OneShotByMapping_C_Received_Notify::CallFunc_PlayAudio_Success' has a wrong offset!");

}

