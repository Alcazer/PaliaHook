#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Cinematic_Intro_BodyRevealFX

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Cinematic_Intro_BodyRevealFX.BP_Cinematic_Intro_BodyRevealFX_C.ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX
// 0x00E0 (0x00E0 - 0x0000)
struct BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CA[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetHatMeshComponent_self_CastInput;       // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetHatMeshComponent_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetFacialHairMeshComponent_self_CastInput; // 0x0020(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetFacialHairMeshComponent_ReturnValue;   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetFaceMaskMeshComponent_self_CastInput;  // 0x0038(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetFaceMaskMeshComponent_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetLegsMeshComponent_self_CastInput;      // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetLegsMeshComponent_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetHairMeshComponent_self_CastInput;      // 0x0068(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetHairMeshComponent_ReturnValue;         // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetHeadMeshComponent_self_CastInput;      // 0x0080(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetHeadMeshComponent_ReturnValue;         // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_CustomizableCharacterInterface> CallFunc_GetTorsoMeshComponent_self_CastInput;     // 0x0098(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 CallFunc_GetTorsoMeshComponent_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetPreviewActor_FoundValidPreview;        // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsServer_ReturnValue;                     // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CB[0x6];                                     // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_GetPlayerPawn_ReturnValue;                // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsCaptureInProgress_ReturnValue;          // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CC[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      K2Node_DynamicCast_AsValeria_Character;            // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX) == 0x000008, "Wrong alignment on BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX");
static_assert(sizeof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX) == 0x0000E0, "Wrong size on BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, EntryPoint) == 0x000000, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHatMeshComponent_self_CastInput) == 0x000008, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHatMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHatMeshComponent_ReturnValue) == 0x000018, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHatMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetFacialHairMeshComponent_self_CastInput) == 0x000020, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetFacialHairMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetFacialHairMeshComponent_ReturnValue) == 0x000030, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetFacialHairMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetFaceMaskMeshComponent_self_CastInput) == 0x000038, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetFaceMaskMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetFaceMaskMeshComponent_ReturnValue) == 0x000048, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetFaceMaskMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetLegsMeshComponent_self_CastInput) == 0x000050, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetLegsMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetLegsMeshComponent_ReturnValue) == 0x000060, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetLegsMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHairMeshComponent_self_CastInput) == 0x000068, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHairMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHairMeshComponent_ReturnValue) == 0x000078, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHairMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHeadMeshComponent_self_CastInput) == 0x000080, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHeadMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetHeadMeshComponent_ReturnValue) == 0x000090, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetHeadMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetTorsoMeshComponent_self_CastInput) == 0x000098, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetTorsoMeshComponent_self_CastInput' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetTorsoMeshComponent_ReturnValue) == 0x0000A8, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetTorsoMeshComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x0000B0, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetPreviewActor_FoundValidPreview) == 0x0000B8, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetPreviewActor_FoundValidPreview' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_IsServer_ReturnValue) == 0x0000B9, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_IsServer_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_GetPlayerPawn_ReturnValue) == 0x0000C0, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_GetPlayerPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_IsCaptureInProgress_ReturnValue) == 0x0000C8, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_IsCaptureInProgress_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, K2Node_DynamicCast_AsValeria_Character) == 0x0000D0, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::K2Node_DynamicCast_AsValeria_Character' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX, CallFunc_IsValid_ReturnValue) == 0x0000D9, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_ExecuteUbergraph_BP_Cinematic_Intro_BodyRevealFX::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Cinematic_Intro_BodyRevealFX.BP_Cinematic_Intro_BodyRevealFX_C.GetPreviewActor
// 0x0050 (0x0050 - 0x0000)
struct BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor final 
{
public:
	bool                                          FoundValidPreview;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CD[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CE[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43CF[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_ValeriaCharacter_C*>         CallFunc_GetAllActorsOfClass_OutActors;            // 0x0018(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEditor_ReturnValue;                     // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D0[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ValeriaCharacter_C*                 CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue;                     // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Contains_ReturnValue_1;                   // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x004F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor) == 0x000008, "Wrong alignment on BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor");
static_assert(sizeof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor) == 0x000050, "Wrong size on BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, FoundValidPreview) == 0x000000, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::FoundValidPreview' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, Temp_int_Array_Index_Variable) == 0x000004, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_IsValid_ReturnValue) == 0x00000C, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_GetAllActorsOfClass_OutActors) == 0x000018, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_GetAllActorsOfClass_OutActors' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_IsEditor_ReturnValue) == 0x000028, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_IsEditor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Array_Get_Item) == 0x000030, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_GetDisplayName_ReturnValue) == 0x000038, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Contains_ReturnValue) == 0x00004C, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Less_IntInt_ReturnValue) == 0x00004D, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_Contains_ReturnValue_1) == 0x00004E, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor, CallFunc_BooleanOR_ReturnValue) == 0x00004F, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_GetPreviewActor::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function BP_Cinematic_Intro_BodyRevealFX.BP_Cinematic_Intro_BodyRevealFX_C.InitializeFXComponents
// 0x0040 (0x0040 - 0x0000)
struct BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents final 
{
public:
	class USkinnedMeshComponent*                  CopyFromComponent;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USkinnedMeshComponent*                  CopyToComponent;                                   // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSkeletalMaterial>              OverrideMaterialArray;                             // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         CallFunc_GetNumMaterials_ReturnValue;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D1[0x3];                                     // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_43D2[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class USkinnedAsset*                          CallFunc_GetSkinnedAsset_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents) == 0x000008, "Wrong alignment on BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents");
static_assert(sizeof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents) == 0x000040, "Wrong size on BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CopyFromComponent) == 0x000000, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CopyFromComponent' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CopyToComponent) == 0x000008, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CopyToComponent' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, OverrideMaterialArray) == 0x000010, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::OverrideMaterialArray' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CallFunc_GetNumMaterials_ReturnValue) == 0x000020, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CallFunc_GetNumMaterials_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CallFunc_Subtract_IntInt_ReturnValue) == 0x000024, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, Temp_int_Variable) == 0x000028, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00002C, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents, CallFunc_GetSkinnedAsset_ReturnValue) == 0x000038, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_InitializeFXComponents::CallFunc_GetSkinnedAsset_ReturnValue' has a wrong offset!");

// Function BP_Cinematic_Intro_BodyRevealFX.BP_Cinematic_Intro_BodyRevealFX_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript");
static_assert(sizeof(BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript) == 0x000001, "Wrong size on BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript");
static_assert(offsetof(BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_Cinematic_Intro_BodyRevealFX_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

