#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_CharacterRenderStudio

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_CharacterRenderStudio_C_ReceiveTick final 
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterRenderStudio_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_CharacterRenderStudio_C_ReceiveTick");
static_assert(sizeof(BP_CharacterRenderStudio_C_ReceiveTick) == 0x000004, "Wrong size on BP_CharacterRenderStudio_C_ReceiveTick");
static_assert(offsetof(BP_CharacterRenderStudio_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_CharacterRenderStudio_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.InitializeValeriaCharacterForRenderStudio
// 0x0008 (0x0008 - 0x0000)
struct BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio final 
{
public:
	class AValeriaCharacter*                      RenderStudioCharacter;                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio) == 0x000008, "Wrong alignment on BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio");
static_assert(sizeof(BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio) == 0x000008, "Wrong size on BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio");
static_assert(offsetof(BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio, RenderStudioCharacter) == 0x000000, "Member 'BP_CharacterRenderStudio_C_InitializeValeriaCharacterForRenderStudio::RenderStudioCharacter' has a wrong offset!");

// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.HandleOnCharacterRenderStateChanged
// 0x0001 (0x0001 - 0x0000)
struct BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged final 
{
public:
	EVAL_CharacterRenderStudioState               State;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged) == 0x000001, "Wrong alignment on BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged");
static_assert(sizeof(BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged) == 0x000001, "Wrong size on BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged");
static_assert(offsetof(BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged, State) == 0x000000, "Member 'BP_CharacterRenderStudio_C_HandleOnCharacterRenderStateChanged::State' has a wrong offset!");

// Function BP_CharacterRenderStudio.BP_CharacterRenderStudio_C.ExecuteUbergraph_BP_CharacterRenderStudio
// 0x0048 (0x0048 - 0x0000)
struct BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B04[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      K2Node_Event_RenderStudioCharacter;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EVAL_CharacterRenderStudioState               K2Node_Event_State;                                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B05[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ValeriaCharacter_C*                 K2Node_DynamicCast_AsBP_Valeria_Character;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B06[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetCharacter_ReturnValue;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B07[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_ValeriaCharacter_C*                 K2Node_DynamicCast_AsBP_Valeria_Character_1;       // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio) == 0x000008, "Wrong alignment on BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio");
static_assert(sizeof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio) == 0x000048, "Wrong size on BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, EntryPoint) == 0x000000, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_Event_RenderStudioCharacter) == 0x000008, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_Event_RenderStudioCharacter' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_Event_State) == 0x000010, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_Event_State' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_DynamicCast_AsBP_Valeria_Character) == 0x000018, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_DynamicCast_AsBP_Valeria_Character' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_SwitchEnum_CmpSuccess) == 0x000021, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, CallFunc_GetCharacter_ReturnValue) == 0x000028, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::CallFunc_GetCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_Event_DeltaSeconds) == 0x000030, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_DynamicCast_AsBP_Valeria_Character_1) == 0x000038, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_DynamicCast_AsBP_Valeria_Character_1' has a wrong offset!");
static_assert(offsetof(BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio, K2Node_DynamicCast_bSuccess_1) == 0x000040, "Member 'BP_CharacterRenderStudio_C_ExecuteUbergraph_BP_CharacterRenderStudio::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

