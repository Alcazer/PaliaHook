#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_GuildActivityTracker

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker
// 0x0140 (0x0140 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UObject* Loaded)>        K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B73[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_CustomEvent_Loaded;                         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_GuidToString_ReturnValue;            // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	class UObject*                                Temp_object_Variable;                              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B74[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00A0(0x0018)()
	struct FVAL_PlayerGuildQuest                  K2Node_CustomEvent_Quest;                          // 0x00B8(0x0088)()
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker) == 0x000140, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, EntryPoint) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, K2Node_CustomEvent_Loaded) == 0x000018, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::K2Node_CustomEvent_Loaded' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Conv_GuidToString_ReturnValue) == 0x000020, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Conv_GuidToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, Temp_object_Variable) == 0x000048, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, K2Node_DynamicCast_AsItem_Type_Definition) == 0x000050, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Conv_IntToString_ReturnValue) == 0x000060, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000080, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000090, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000A0, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker, K2Node_CustomEvent_Quest) == 0x0000B8, "Member 'WBP_ListEntry_GuildActivityTracker_C_ExecuteUbergraph_WBP_ListEntry_GuildActivityTracker::K2Node_CustomEvent_Quest' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.HandleContributeClicked
// 0x0048 (0x0048 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked final 
{
public:
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B75[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PlayerGuildComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B76[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_ItemTypeDefinitionAsset*           K2Node_DynamicCast_AsItem_Type_Definition;         // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B77[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked) == 0x000048, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, CallFunc_GetValeriaPlayerController_OutResult) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000008, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, CallFunc_LoadAsset_Blocking_ReturnValue) == 0x000020, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::CallFunc_LoadAsset_Blocking_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, K2Node_DynamicCast_AsItem_Type_Definition) == 0x000028, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::K2Node_DynamicCast_AsItem_Type_Definition' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, K2Node_DynamicCast_bSuccess) == 0x000030, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked, CallFunc_Conv_IntToString_ReturnValue) == 0x000038, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleContributeClicked::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.HandleDeleteClicked
// 0x0020 (0x0020 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked final 
{
public:
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B78[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PlayerGuildComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked) == 0x000020, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked, CallFunc_GetValeriaPlayerController_OutResult) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000008, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked, K2Node_SwitchEnum_CmpSuccess) == 0x000018, "Member 'WBP_ListEntry_GuildActivityTracker_C_HandleDeleteClicked::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.InitializeFromQuestInfo
// 0x0088 (0x0088 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo final 
{
public:
	struct FVAL_PlayerGuildQuest                  Quest;                                             // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo) == 0x000088, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo, Quest) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_InitializeFromQuestInfo::Quest' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.OnContributeClicked__DelegateSignature
// 0x0088 (0x0088 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature final 
{
public:
	struct FVAL_PlayerGuildQuest                  Quest;                                             // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature) == 0x000088, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature, Quest) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_OnContributeClicked__DelegateSignature::Quest' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.OnDeleteClicked__DelegateSignature
// 0x0088 (0x0088 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature final 
{
public:
	struct FVAL_PlayerGuildQuest                  Quest;                                             // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature) == 0x000088, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature, Quest) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_OnDeleteClicked__DelegateSignature::Quest' has a wrong offset!");

// Function WBP_ListEntry_GuildActivityTracker.WBP_ListEntry_GuildActivityTracker_C.OnLoaded_EE92293646BD348632AE99B65BDE7D5E
// 0x0008 (0x0008 - 0x0000)
struct WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E final 
{
public:
	class UObject*                                Loaded;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E) == 0x000008, "Wrong alignment on WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E");
static_assert(sizeof(WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E) == 0x000008, "Wrong size on WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E");
static_assert(offsetof(WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E, Loaded) == 0x000000, "Member 'WBP_ListEntry_GuildActivityTracker_C_OnLoaded_EE92293646BD348632AE99B65BDE7D5E::Loaded' has a wrong offset!");

}

