#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GuildActivityTracker

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.BindGuildQuestsChanged
// 0x0040 (0x0040 - 0x0000)
struct WBP_GuildActivityTracker_C_BindGuildQuestsChanged final 
{
public:
	bool                                          ShouldBind;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B84[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_PlayerGuildComponent*              LocalComponent;                                    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVAL_PlayerGuildComponent* PlayerGuildComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B85[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B86[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_PlayerGuildComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_BindGuildQuestsChanged");
static_assert(sizeof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged) == 0x000040, "Wrong size on WBP_GuildActivityTracker_C_BindGuildQuestsChanged");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, ShouldBind) == 0x000000, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::ShouldBind' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, LocalComponent) == 0x000008, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::LocalComponent' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, CallFunc_GetValeriaPlayerController_OutResult) == 0x000020, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000028, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, K2Node_SwitchEnum_CmpSuccess) == 0x000030, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_BindGuildQuestsChanged, CallFunc_GetComponentByClass_ReturnValue) == 0x000038, "Member 'WBP_GuildActivityTracker_C_BindGuildQuestsChanged::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.CreatePinWidgetFromQuest
// 0x00B0 (0x00B0 - 0x0000)
struct WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest final 
{
public:
	struct FVAL_PlayerGuildQuest                  Quest;                                             // 0x0000(0x0088)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UVAL_PlayerGuildComponent*              PlayerGuildComp;                                   // 0x0088(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ListEntry_GuildActivityTracker_C*  CallFunc_Create_ReturnValue;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsQuestPinned_ReturnValue;                // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B87[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest");
static_assert(sizeof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest) == 0x0000B0, "Wrong size on WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, Quest) == 0x000000, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::Quest' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, PlayerGuildComp) == 0x000088, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::PlayerGuildComp' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, CallFunc_GetOwningPlayer_ReturnValue) == 0x000090, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, CallFunc_Create_ReturnValue) == 0x000098, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, CallFunc_IsQuestPinned_ReturnValue) == 0x0000A0, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::CallFunc_IsQuestPinned_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest, CallFunc_AddChild_ReturnValue) == 0x0000A8, "Member 'WBP_GuildActivityTracker_C_CreatePinWidgetFromQuest::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.ExecuteUbergraph_WBP_GuildActivityTracker
// 0x0238 (0x0238 - 0x0000)
struct WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureEnabled_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B88[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B89[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_3;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8A[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_PlayerGuildComponent*              K2Node_CustomEvent_PlayerGuildComp;                // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PlayerGuildComponent*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PlayerGuildQuest                  CallFunc_Array_Get_Item;                           // 0x0060(0x0088)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8C[0x4];                                     // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_PlayerGuildQuest                  CallFunc_Array_Get_Item_1;                         // 0x00F0(0x0088)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0178(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8D[0x3];                                     // 0x0179(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x017C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PlayerGuildQuest                  CallFunc_Array_Get_Item_2;                         // 0x0180(0x0088)()
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8E[0x3];                                     // 0x0209(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x020C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0210(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x0211(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B8F[0x6];                                     // 0x0212(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0218(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ListEntry_GuildActivityTracker_C*  CallFunc_Create_ReturnValue;                       // 0x0220(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0228(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureEnabled_ReturnValue_1;           // 0x0230(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFeatureEnabled_ReturnValue_2;           // 0x0231(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker");
static_assert(sizeof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker) == 0x000238, "Wrong size on WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, EntryPoint) == 0x000000, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_IsFeatureEnabled_ReturnValue) == 0x000004, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_IsFeatureEnabled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Variable) == 0x000008, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_LessEqual_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Add_IntInt_ReturnValue_2) == 0x000020, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Array_Index_Variable) == 0x000024, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Array_Index_Variable_1) == 0x000028, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Loop_Counter_Variable_2) == 0x00002C, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Add_IntInt_ReturnValue_3) == 0x000030, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Add_IntInt_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, Temp_int_Array_Index_Variable_2) == 0x000034, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, K2Node_Event_IsDesignTime) == 0x000038, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, K2Node_CustomEvent_PlayerGuildComp) == 0x000040, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::K2Node_CustomEvent_PlayerGuildComp' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_GetValeriaPlayerController_OutResult) == 0x000048, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000050, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_GetComponentByClass_ReturnValue) == 0x000058, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Get_Item) == 0x000060, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Length_ReturnValue) == 0x0000E8, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Get_Item_1) == 0x0000F0, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Less_IntInt_ReturnValue) == 0x000178, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Length_ReturnValue_1) == 0x00017C, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Get_Item_2) == 0x000180, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Less_IntInt_ReturnValue_1) == 0x000208, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Array_Length_ReturnValue_2) == 0x00020C, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, K2Node_SwitchEnum_CmpSuccess) == 0x000210, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Less_IntInt_ReturnValue_2) == 0x000211, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_GetOwningPlayer_ReturnValue) == 0x000218, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_Create_ReturnValue) == 0x000220, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000228, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_IsFeatureEnabled_ReturnValue_1) == 0x000230, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_IsFeatureEnabled_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker, CallFunc_IsFeatureEnabled_ReturnValue_2) == 0x000231, "Member 'WBP_GuildActivityTracker_C_ExecuteUbergraph_WBP_GuildActivityTracker::CallFunc_IsFeatureEnabled_ReturnValue_2' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.HandleOnGuildPinnedQuestsChanged
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged final 
{
public:
	class UVAL_PlayerGuildComponent*              PlayerGuildComponent;                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged");
static_assert(sizeof(WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged) == 0x000008, "Wrong size on WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged");
static_assert(offsetof(WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged, PlayerGuildComponent) == 0x000000, "Member 'WBP_GuildActivityTracker_C_HandleOnGuildPinnedQuestsChanged::PlayerGuildComponent' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.InitializeFromCharacter
// 0x0018 (0x0018 - 0x0000)
struct WBP_GuildActivityTracker_C_InitializeFromCharacter final 
{
public:
	class UVAL_PlayerGuildComponent*              PlayerGuildComp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UVAL_PlayerGuildComponent* PlayerGuildComponent)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_InitializeFromCharacter) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_InitializeFromCharacter");
static_assert(sizeof(WBP_GuildActivityTracker_C_InitializeFromCharacter) == 0x000018, "Wrong size on WBP_GuildActivityTracker_C_InitializeFromCharacter");
static_assert(offsetof(WBP_GuildActivityTracker_C_InitializeFromCharacter, PlayerGuildComp) == 0x000000, "Member 'WBP_GuildActivityTracker_C_InitializeFromCharacter::PlayerGuildComp' has a wrong offset!");
static_assert(offsetof(WBP_GuildActivityTracker_C_InitializeFromCharacter, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_GuildActivityTracker_C_InitializeFromCharacter::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_GuildActivityTracker_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_GuildActivityTracker_C_PreConstruct");
static_assert(sizeof(WBP_GuildActivityTracker_C_PreConstruct) == 0x000001, "Wrong size on WBP_GuildActivityTracker_C_PreConstruct");
static_assert(offsetof(WBP_GuildActivityTracker_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_GuildActivityTracker_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_GuildActivityTracker.WBP_GuildActivityTracker_C.RebuildQuests
// 0x0008 (0x0008 - 0x0000)
struct WBP_GuildActivityTracker_C_RebuildQuests final 
{
public:
	class UVAL_PlayerGuildComponent*              PlayerGuildComp;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GuildActivityTracker_C_RebuildQuests) == 0x000008, "Wrong alignment on WBP_GuildActivityTracker_C_RebuildQuests");
static_assert(sizeof(WBP_GuildActivityTracker_C_RebuildQuests) == 0x000008, "Wrong size on WBP_GuildActivityTracker_C_RebuildQuests");
static_assert(offsetof(WBP_GuildActivityTracker_C_RebuildQuests, PlayerGuildComp) == 0x000000, "Member 'WBP_GuildActivityTracker_C_RebuildQuests::PlayerGuildComp' has a wrong offset!");

}

