#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_EmoteEntry_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged final 
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged");
static_assert(sizeof(WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged");
static_assert(offsetof(WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged final 
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged");
static_assert(sizeof(WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged");
static_assert(offsetof(WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.EmoteDropped
// 0x0004 (0x0004 - 0x0000)
struct WBP_EmoteEntry_CM_C_EmoteDropped final 
{
public:
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_EmoteDropped) == 0x000004, "Wrong alignment on WBP_EmoteEntry_CM_C_EmoteDropped");
static_assert(sizeof(WBP_EmoteEntry_CM_C_EmoteDropped) == 0x000004, "Wrong size on WBP_EmoteEntry_CM_C_EmoteDropped");
static_assert(offsetof(WBP_EmoteEntry_CM_C_EmoteDropped, CallFunc_AkEventGlobal_ReturnValue) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_EmoteDropped::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.ExecuteUbergraph_WBP_EmoteEntry_CM
// 0x0230 (0x0230 - 0x0000)
struct WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C6F[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_EmoteItemObject_CM_C*               K2Node_DynamicCast_AsBP_Emote_Item_Object_CM;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C70[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C71[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEmoteDataAsset*                        K2Node_DynamicCast_AsEmote_Data_Asset;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C72[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C73[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                Temp_object_Variable;                              // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDragDropping_ReturnValue;               // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C74[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEmoteDataAsset*                        K2Node_DynamicCast_AsEmote_Data_Asset_1;           // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C75[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_PointerEvent;                         // 0x0080(0x0078)(ConstParm)
	class UDragDropOperation*                     K2Node_Event_Operation;                            // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0100(0x0038)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x0138(0x0078)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x01B0(0x0078)(ConstParm)
	class UWidget*                                K2Node_Select_Default;                             // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM");
static_assert(sizeof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM) == 0x000230, "Wrong size on WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, EntryPoint) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000004, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_bIsExpanded) == 0x000008, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_bIsSelected) == 0x000009, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_ListItemObject) == 0x000010, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_AsBP_Emote_Item_Object_CM) == 0x000018, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_AsBP_Emote_Item_Object_CM' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_CustomEvent_Loaded) == 0x000028, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, Temp_bool_Variable) == 0x000030, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_AsEmote_Data_Asset) == 0x000040, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_AsEmote_Data_Asset' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_bSuccess_1) == 0x000048, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, CallFunc_IsValid_ReturnValue) == 0x00005C, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, Temp_object_Variable) == 0x000060, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, CallFunc_IsDragDropping_ReturnValue) == 0x000068, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::CallFunc_IsDragDropping_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_AsEmote_Data_Asset_1) == 0x000070, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_AsEmote_Data_Asset_1' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_DynamicCast_bSuccess_2) == 0x000078, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_PointerEvent) == 0x000080, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_Operation) == 0x0000F8, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_Operation' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_MyGeometry) == 0x000100, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_MouseEvent_1) == 0x000138, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Event_MouseEvent) == 0x0001B0, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM, K2Node_Select_Default) == 0x000228, "Member 'WBP_EmoteEntry_CM_C_ExecuteUbergraph_WBP_EmoteEntry_CM::K2Node_Select_Default' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnDragCancelled
// 0x0080 (0x0080 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnDragCancelled final 
{
public:
	struct FPointerEvent                          PointerEvent;                                      // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x0078(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnDragCancelled) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnDragCancelled");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnDragCancelled) == 0x000080, "Wrong size on WBP_EmoteEntry_CM_C_OnDragCancelled");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragCancelled, PointerEvent) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnDragCancelled::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragCancelled, Operation) == 0x000078, "Member 'WBP_EmoteEntry_CM_C_OnDragCancelled::Operation' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnDragDetected
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnDragDetected final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00B0(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_EmoteDrag_C*                        CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_EmoteDrag_C*                       CallFunc_Create_ReturnValue;                       // 0x00C0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue; // 0x00C8(0x0028)(UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnDragDetected) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnDragDetected");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnDragDetected) == 0x0000F0, "Wrong size on WBP_EmoteEntry_CM_C_OnDragDetected");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, PointerEvent) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, Operation) == 0x0000B0, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000B8, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x0000C0, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDragDetected, CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue) == 0x0000C8, "Member 'WBP_EmoteEntry_CM_C_OnDragDetected::CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnDrop
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnDrop final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0038(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00B0(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00B8(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C76[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_EmoteDrag_C*                        K2Node_DynamicCast_AsBP_Emote_Drag;                // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C77[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_EmoteWheelChoice_CM_C*             K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM;    // 0x00D0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnDrop) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnDrop");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnDrop) == 0x0000E0, "Wrong size on WBP_EmoteEntry_CM_C_OnDrop");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, PointerEvent) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, Operation) == 0x0000B0, "Member 'WBP_EmoteEntry_CM_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, ReturnValue) == 0x0000B8, "Member 'WBP_EmoteEntry_CM_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, K2Node_DynamicCast_AsBP_Emote_Drag) == 0x0000C0, "Member 'WBP_EmoteEntry_CM_C_OnDrop::K2Node_DynamicCast_AsBP_Emote_Drag' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000C8, "Member 'WBP_EmoteEntry_CM_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM) == 0x0000D0, "Member 'WBP_EmoteEntry_CM_C_OnDrop::K2Node_DynamicCast_AsWBP_Emote_Wheel_Choice_CM' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnDrop, K2Node_DynamicCast_bSuccess_1) == 0x0000D8, "Member 'WBP_EmoteEntry_CM_C_OnDrop::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnEmoteEntryFocused__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature final 
{
public:
	class UWBP_EmoteEntry_CM_C*                   Emote_Entry;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature) == 0x000008, "Wrong size on WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature, Emote_Entry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnEmoteEntryFocused__DelegateSignature::Emote_Entry' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnEmoteEntrySelected__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature final 
{
public:
	class UWBP_EmoteEntry_CM_C*                   Emote_Entry;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature) == 0x000008, "Wrong size on WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature, Emote_Entry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnEmoteEntrySelected__DelegateSignature::Emote_Entry' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_EmoteEntry_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_EmoteEntry_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_EmoteEntry_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnListItemObjectSet final 
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnListItemObjectSet");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnListItemObjectSet) == 0x000008, "Wrong size on WBP_EmoteEntry_CM_C_OnListItemObjectSet");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C
// 0x0008 (0x0008 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C final 
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C) == 0x000008, "Wrong size on WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C, Loaded) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnLoaded_A1BAA05F46A2EA0DF2DA37995C891D5C::Loaded' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnMouseButtonDown
// 0x0220 (0x0220 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnMouseButtonDown final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00B0(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0168(0x00B8)()
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnMouseButtonDown");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnMouseButtonDown) == 0x000220, "Wrong size on WBP_EmoteEntry_CM_C_OnMouseButtonDown");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseButtonDown, ReturnValue) == 0x0000B0, "Member 'WBP_EmoteEntry_CM_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000168, "Member 'WBP_EmoteEntry_CM_C_OnMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnMouseEnter
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnMouseEnter final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnMouseEnter) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnMouseEnter");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnMouseEnter) == 0x0000B0, "Wrong size on WBP_EmoteEntry_CM_C_OnMouseEnter");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'WBP_EmoteEntry_CM_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.OnMouseLeave
// 0x0078 (0x0078 - 0x0000)
struct WBP_EmoteEntry_CM_C_OnMouseLeave final 
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0078)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_OnMouseLeave) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_OnMouseLeave");
static_assert(sizeof(WBP_EmoteEntry_CM_C_OnMouseLeave) == 0x000078, "Wrong size on WBP_EmoteEntry_CM_C_OnMouseLeave");
static_assert(offsetof(WBP_EmoteEntry_CM_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.RefreshBorder
// 0x0020 (0x0020 - 0x0000)
struct WBP_EmoteEntry_CM_C_RefreshBorder final 
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C78[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UValeriaEmoteComponent*                 CallFunc_GetEmoteComponent_ReturnValue;            // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmoteEquippedById_ReturnValue;          // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_RefreshBorder) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_RefreshBorder");
static_assert(sizeof(WBP_EmoteEntry_CM_C_RefreshBorder) == 0x000020, "Wrong size on WBP_EmoteEntry_CM_C_RefreshBorder");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, Temp_byte_Variable) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, CallFunc_GetValeriaCharacter_OutResult) == 0x000001, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000008, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, CallFunc_GetEmoteComponent_ReturnValue) == 0x000010, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::CallFunc_GetEmoteComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, CallFunc_IsValid_ReturnValue) == 0x000019, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, Temp_byte_Variable_1) == 0x00001A, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, Temp_bool_Variable) == 0x00001B, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, CallFunc_IsEmoteEquippedById_ReturnValue) == 0x00001C, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::CallFunc_IsEmoteEquippedById_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_RefreshBorder, K2Node_Select_Default) == 0x00001D, "Member 'WBP_EmoteEntry_CM_C_RefreshBorder::K2Node_Select_Default' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.SelectEntryByGamepad
// 0x0004 (0x0004 - 0x0000)
struct WBP_EmoteEntry_CM_C_SelectEntryByGamepad final 
{
public:
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_SelectEntryByGamepad) == 0x000004, "Wrong alignment on WBP_EmoteEntry_CM_C_SelectEntryByGamepad");
static_assert(sizeof(WBP_EmoteEntry_CM_C_SelectEntryByGamepad) == 0x000004, "Wrong size on WBP_EmoteEntry_CM_C_SelectEntryByGamepad");
static_assert(offsetof(WBP_EmoteEntry_CM_C_SelectEntryByGamepad, CallFunc_AkEventGlobal_ReturnValue) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_SelectEntryByGamepad::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");

// Function WBP_EmoteEntry_CM.WBP_EmoteEntry_CM_C.SetEmoteItemToWheelChoice
// 0x0010 (0x0010 - 0x0000)
struct WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice final 
{
public:
	class UWBP_EmoteWheelChoice_CM_C*             Wheel_Choice;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice) == 0x000008, "Wrong alignment on WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice");
static_assert(sizeof(WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice) == 0x000010, "Wrong size on WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice");
static_assert(offsetof(WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice, Wheel_Choice) == 0x000000, "Member 'WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice::Wheel_Choice' has a wrong offset!");
static_assert(offsetof(WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_EmoteEntry_CM_C_SetEmoteItemToWheelChoice::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

