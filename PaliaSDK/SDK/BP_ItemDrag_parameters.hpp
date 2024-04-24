#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ItemDrag

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function BP_ItemDrag.BP_ItemDrag_C.DragCancelled
// 0x0078 (0x0078 - 0x0000)
struct BP_ItemDrag_C_DragCancelled final 
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemDrag_C_DragCancelled) == 0x000008, "Wrong alignment on BP_ItemDrag_C_DragCancelled");
static_assert(sizeof(BP_ItemDrag_C_DragCancelled) == 0x000078, "Wrong size on BP_ItemDrag_C_DragCancelled");
static_assert(offsetof(BP_ItemDrag_C_DragCancelled, PointerEvent) == 0x000000, "Member 'BP_ItemDrag_C_DragCancelled::PointerEvent' has a wrong offset!");

// Function BP_ItemDrag.BP_ItemDrag_C.DragStarted
// 0x0078 (0x0078 - 0x0000)
struct BP_ItemDrag_C_DragStarted final 
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemDrag_C_DragStarted) == 0x000008, "Wrong alignment on BP_ItemDrag_C_DragStarted");
static_assert(sizeof(BP_ItemDrag_C_DragStarted) == 0x000078, "Wrong size on BP_ItemDrag_C_DragStarted");
static_assert(offsetof(BP_ItemDrag_C_DragStarted, PointerEvent) == 0x000000, "Member 'BP_ItemDrag_C_DragStarted::PointerEvent' has a wrong offset!");

// Function BP_ItemDrag.BP_ItemDrag_C.Drop
// 0x0078 (0x0078 - 0x0000)
struct BP_ItemDrag_C_Drop final 
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(BP_ItemDrag_C_Drop) == 0x000008, "Wrong alignment on BP_ItemDrag_C_Drop");
static_assert(sizeof(BP_ItemDrag_C_Drop) == 0x000078, "Wrong size on BP_ItemDrag_C_Drop");
static_assert(offsetof(BP_ItemDrag_C_Drop, PointerEvent) == 0x000000, "Member 'BP_ItemDrag_C_Drop::PointerEvent' has a wrong offset!");

// Function BP_ItemDrag.BP_ItemDrag_C.ExecuteUbergraph_BP_ItemDrag
// 0x0170 (0x0170 - 0x0000)
struct BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_PointerEvent_2;                       // 0x0008(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_PointerEvent_1;                       // 0x0080(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_PointerEvent;                         // 0x00F8(0x0078)(ConstParm)
};
static_assert(alignof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag) == 0x000008, "Wrong alignment on BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag");
static_assert(sizeof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag) == 0x000170, "Wrong size on BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag");
static_assert(offsetof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag, EntryPoint) == 0x000000, "Member 'BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag, K2Node_Event_PointerEvent_2) == 0x000008, "Member 'BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag::K2Node_Event_PointerEvent_2' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag, K2Node_Event_PointerEvent_1) == 0x000080, "Member 'BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag::K2Node_Event_PointerEvent_1' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag, K2Node_Event_PointerEvent) == 0x0000F8, "Member 'BP_ItemDrag_C_ExecuteUbergraph_BP_ItemDrag::K2Node_Event_PointerEvent' has a wrong offset!");

// Function BP_ItemDrag.BP_ItemDrag_C.GetItemAudioConfig
// 0x00F0 (0x00F0 - 0x0000)
struct BP_ItemDrag_C_GetItemAudioConfig final 
{
public:
	struct FItemAudioConfig                       AudioConfig;                                       // 0x0000(0x0038)(Parm, OutParm)
	struct FValeriaItem                           CallFunc_GetItem_ReturnValue;                      // 0x0038(0x0060)()
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C8F[0x6];                                     // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemAudioConfig                       CallFunc_GetDataTableRowFromName_OutRow;           // 0x00B0(0x0038)()
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemDrag_C_GetItemAudioConfig) == 0x000008, "Wrong alignment on BP_ItemDrag_C_GetItemAudioConfig");
static_assert(sizeof(BP_ItemDrag_C_GetItemAudioConfig) == 0x0000F0, "Wrong size on BP_ItemDrag_C_GetItemAudioConfig");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, AudioConfig) == 0x000000, "Member 'BP_ItemDrag_C_GetItemAudioConfig::AudioConfig' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, CallFunc_GetItem_ReturnValue) == 0x000038, "Member 'BP_ItemDrag_C_GetItemAudioConfig::CallFunc_GetItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000098, "Member 'BP_ItemDrag_C_GetItemAudioConfig::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, K2Node_DynamicCast_AsItem_Type_Definition) == 0x0000A0, "Member 'BP_ItemDrag_C_GetItemAudioConfig::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, K2Node_DynamicCast_bSuccess) == 0x0000A8, "Member 'BP_ItemDrag_C_GetItemAudioConfig::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, CallFunc_IsValid_ReturnValue) == 0x0000A9, "Member 'BP_ItemDrag_C_GetItemAudioConfig::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, CallFunc_GetDataTableRowFromName_OutRow) == 0x0000B0, "Member 'BP_ItemDrag_C_GetItemAudioConfig::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_GetItemAudioConfig, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x0000E8, "Member 'BP_ItemDrag_C_GetItemAudioConfig::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");

// Function BP_ItemDrag.BP_ItemDrag_C.PlayDragDropSound
// 0x00A0 (0x00A0 - 0x0000)
struct BP_ItemDrag_C_PlayDragDropSound final 
{
public:
	bool                                          Drag;                                              // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C90[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemAudioConfig                       CallFunc_GetItemAudioConfig_AudioConfig;           // 0x0008(0x0038)()
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C91[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FItemAudioConfig                       CallFunc_GetItemAudioConfig_AudioConfig_1;         // 0x0048(0x0038)()
	int32                                         CallFunc_AkEventGlobal_ReturnValue_2;              // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C92[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_3;              // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C93[0x3];                                     // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_4;              // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C94[0x3];                                     // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_5;              // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ItemDrag_C_PlayDragDropSound) == 0x000008, "Wrong alignment on BP_ItemDrag_C_PlayDragDropSound");
static_assert(sizeof(BP_ItemDrag_C_PlayDragDropSound) == 0x0000A0, "Wrong size on BP_ItemDrag_C_PlayDragDropSound");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, Drag) == 0x000000, "Member 'BP_ItemDrag_C_PlayDragDropSound::Drag' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue) == 0x000004, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_GetItemAudioConfig_AudioConfig) == 0x000008, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_GetItemAudioConfig_AudioConfig' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000040, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_GetItemAudioConfig_AudioConfig_1) == 0x000048, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_GetItemAudioConfig_AudioConfig_1' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue_2) == 0x000080, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_IsValid_ReturnValue) == 0x000084, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue_3) == 0x000088, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_IsValid_ReturnValue_1) == 0x00008C, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue_4) == 0x000090, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_IsValid_ReturnValue_2) == 0x000094, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_AkEventGlobal_ReturnValue_5) == 0x000098, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_AkEventGlobal_ReturnValue_5' has a wrong offset!");
static_assert(offsetof(BP_ItemDrag_C_PlayDragDropSound, CallFunc_IsValid_ReturnValue_3) == 0x00009C, "Member 'BP_ItemDrag_C_PlayDragDropSound::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");

}

