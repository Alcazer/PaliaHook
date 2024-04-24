#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PartyHUD

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_PartyHUD.WBP_PartyHUD_C.ExecuteUbergraph_WBP_PartyHUD
// 0x0228 (0x0228 - 0x0000)
struct WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4401[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PartyHUD_MemberRow_C*              CallFunc_Create_ReturnValue;                       // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4402[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4403[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               K2Node_CustomEvent_vpc;                            // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_CustomEvent_ctxt;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult_1;   // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4404[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue_1; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EVAL_PartyManagerState State)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0078(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4405[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class AValeriaPlayerController* Vpc, class AValeriaCharacter* Ctxt)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x008C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x009C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4406[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PartyMember                       K2Node_CustomEvent_Member_2;                       // 0x00D8(0x0050)(ConstParm, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0128(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PartyMember                       K2Node_CustomEvent_Member_1;                       // 0x0138(0x0050)(ConstParm, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0188(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_9;            // 0x0198(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PartyManager*                      CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x01A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PartyManager*                      CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x01B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FVAL_PartyMember& Member)> K2Node_CreateDelegate_OutputDelegate_10;           // 0x01B8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class AValeriaPlayerController* Vpc, class AValeriaCharacter* Ctxt)> K2Node_CreateDelegate_OutputDelegate_11;           // 0x01C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PartyMember                       K2Node_CustomEvent_Member;                         // 0x01D8(0x0050)(ConstParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD");
static_assert(sizeof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD) == 0x000228, "Wrong size on WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, EntryPoint) == 0x000000, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetOwningPlayer_ReturnValue) == 0x000018, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_Create_ReturnValue) == 0x000020, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000028, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetValeriaPlayerController_OutResult) == 0x000030, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000038, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_SwitchEnum_CmpSuccess) == 0x000040, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_Event_IsDesignTime) == 0x000041, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CustomEvent_vpc) == 0x000048, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CustomEvent_vpc' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CustomEvent_ctxt) == 0x000050, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CustomEvent_ctxt' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetValeriaPlayerController_OutResult_1) == 0x000068, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetValeriaPlayerController_OutResult_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetValeriaPlayerController_ReturnValue_1) == 0x000070, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetValeriaPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_2) == 0x000078, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_SwitchEnum_CmpSuccess_1) == 0x000088, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_3) == 0x00008C, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_4) == 0x00009C, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000AC, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, Temp_int_Variable) == 0x0000BC, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C0, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_LessEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_Add_IntInt_ReturnValue) == 0x0000D4, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CustomEvent_Member_2) == 0x0000D8, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CustomEvent_Member_2' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_7) == 0x000128, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CustomEvent_Member_1) == 0x000138, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CustomEvent_Member_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_8) == 0x000188, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_9) == 0x000198, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_9' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0001A8, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x0001B0, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_10) == 0x0001B8, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_10' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CreateDelegate_OutputDelegate_11) == 0x0001C8, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CreateDelegate_OutputDelegate_11' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD, K2Node_CustomEvent_Member) == 0x0001D8, "Member 'WBP_PartyHUD_C_ExecuteUbergraph_WBP_PartyHUD::K2Node_CustomEvent_Member' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandleCharacterWasSpawned
// 0x0010 (0x0010 - 0x0000)
struct WBP_PartyHUD_C_HandleCharacterWasSpawned final 
{
public:
	class AValeriaPlayerController*               Vpc;                                               // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Ctxt;                                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandleCharacterWasSpawned) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_HandleCharacterWasSpawned");
static_assert(sizeof(WBP_PartyHUD_C_HandleCharacterWasSpawned) == 0x000010, "Wrong size on WBP_PartyHUD_C_HandleCharacterWasSpawned");
static_assert(offsetof(WBP_PartyHUD_C_HandleCharacterWasSpawned, Vpc) == 0x000000, "Member 'WBP_PartyHUD_C_HandleCharacterWasSpawned::Vpc' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_HandleCharacterWasSpawned, Ctxt) == 0x000008, "Member 'WBP_PartyHUD_C_HandleCharacterWasSpawned::Ctxt' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandleOnPartyMemberPromoted
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartyHUD_C_HandleOnPartyMemberPromoted final 
{
public:
	struct FVAL_PartyMember                       Member;                                            // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandleOnPartyMemberPromoted) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_HandleOnPartyMemberPromoted");
static_assert(sizeof(WBP_PartyHUD_C_HandleOnPartyMemberPromoted) == 0x000050, "Wrong size on WBP_PartyHUD_C_HandleOnPartyMemberPromoted");
static_assert(offsetof(WBP_PartyHUD_C_HandleOnPartyMemberPromoted, Member) == 0x000000, "Member 'WBP_PartyHUD_C_HandleOnPartyMemberPromoted::Member' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandleOnPartyStateChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PartyHUD_C_HandleOnPartyStateChanged final 
{
public:
	EVAL_PartyManagerState                        State;                                             // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandleOnPartyStateChanged) == 0x000001, "Wrong alignment on WBP_PartyHUD_C_HandleOnPartyStateChanged");
static_assert(sizeof(WBP_PartyHUD_C_HandleOnPartyStateChanged) == 0x000001, "Wrong size on WBP_PartyHUD_C_HandleOnPartyStateChanged");
static_assert(offsetof(WBP_PartyHUD_C_HandleOnPartyStateChanged, State) == 0x000000, "Member 'WBP_PartyHUD_C_HandleOnPartyStateChanged::State' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandlePartyMemberAdded
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartyHUD_C_HandlePartyMemberAdded final 
{
public:
	struct FVAL_PartyMember                       Member;                                            // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandlePartyMemberAdded) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_HandlePartyMemberAdded");
static_assert(sizeof(WBP_PartyHUD_C_HandlePartyMemberAdded) == 0x000050, "Wrong size on WBP_PartyHUD_C_HandlePartyMemberAdded");
static_assert(offsetof(WBP_PartyHUD_C_HandlePartyMemberAdded, Member) == 0x000000, "Member 'WBP_PartyHUD_C_HandlePartyMemberAdded::Member' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandlePartyMemberKicked
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartyHUD_C_HandlePartyMemberKicked final 
{
public:
	struct FVAL_PartyMember                       Member;                                            // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandlePartyMemberKicked) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_HandlePartyMemberKicked");
static_assert(sizeof(WBP_PartyHUD_C_HandlePartyMemberKicked) == 0x000050, "Wrong size on WBP_PartyHUD_C_HandlePartyMemberKicked");
static_assert(offsetof(WBP_PartyHUD_C_HandlePartyMemberKicked, Member) == 0x000000, "Member 'WBP_PartyHUD_C_HandlePartyMemberKicked::Member' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.HandlePartyMemberRemoved
// 0x0050 (0x0050 - 0x0000)
struct WBP_PartyHUD_C_HandlePartyMemberRemoved final 
{
public:
	struct FVAL_PartyMember                       Member;                                            // 0x0000(0x0050)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_HandlePartyMemberRemoved) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_HandlePartyMemberRemoved");
static_assert(sizeof(WBP_PartyHUD_C_HandlePartyMemberRemoved) == 0x000050, "Wrong size on WBP_PartyHUD_C_HandlePartyMemberRemoved");
static_assert(offsetof(WBP_PartyHUD_C_HandlePartyMemberRemoved, Member) == 0x000000, "Member 'WBP_PartyHUD_C_HandlePartyMemberRemoved::Member' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.InitializeFromLocalCharacter
// 0x0068 (0x0068 - 0x0000)
struct WBP_PartyHUD_C_InitializeFromLocalCharacter final 
{
public:
	class FText                                   CallFunc_MakeLiteralText_ReturnValue;              // 0x0000(0x0018)()
	class UVAL_PartyManager*                      CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0020(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaCharacter_OutResult;            // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4407[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4408[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
};
static_assert(alignof(WBP_PartyHUD_C_InitializeFromLocalCharacter) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_InitializeFromLocalCharacter");
static_assert(sizeof(WBP_PartyHUD_C_InitializeFromLocalCharacter) == 0x000068, "Wrong size on WBP_PartyHUD_C_InitializeFromLocalCharacter");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_MakeLiteralText_ReturnValue) == 0x000000, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_MakeLiteralText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000018, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_GetText_ReturnValue) == 0x000020, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000038, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_GetValeriaCharacter_OutResult) == 0x000039, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_GetValeriaCharacter_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000040, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, K2Node_SwitchEnum_CmpSuccess) == 0x000048, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_InitializeFromLocalCharacter, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_PartyHUD_C_InitializeFromLocalCharacter::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_PartyHUD_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_PartyHUD_C_PreConstruct");
static_assert(sizeof(WBP_PartyHUD_C_PreConstruct) == 0x000001, "Wrong size on WBP_PartyHUD_C_PreConstruct");
static_assert(offsetof(WBP_PartyHUD_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_PartyHUD_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_PartyHUD.WBP_PartyHUD_C.UpdateFromParty
// 0x0150 (0x0150 - 0x0000)
struct WBP_PartyHUD_C_UpdateFromParty final 
{
public:
	TArray<struct FVAL_PartyMember>               AllPartyMembers;                                   // 0x0000(0x0010)(Edit, BlueprintVisible)
	class UVAL_PartyManager*                      CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4409[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<struct FVAL_PartyMember>                 CallFunc_GetAllPartyMembers_ReturnValue;           // 0x0020(0x0050)()
	TArray<struct FVAL_PartyMember>               CallFunc_Set_ToArray_Result;                       // 0x0070(0x0010)(ReferenceParm)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0084(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_440A[0x3];                                     // 0x0085(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVAL_PartyMember                       CallFunc_Array_Get_Item;                           // 0x0090(0x0050)(HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_440B[0x7];                                     // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAuthManager*                           CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_PartyManager*                      CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;    // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       CallFunc_GetNetId_ReturnValue;                     // 0x00F8(0x0030)(HasGetValueTypeHash)
	bool                                          CallFunc_IsCurrentPartyValid_ReturnValue;          // 0x0128(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ReturnValue;                   // 0x0129(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x012A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_440C[0x5];                                     // 0x012B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0130(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_440D[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PartyHUD_MemberRow_C*              CallFunc_Create_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0148(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PartyHUD_C_UpdateFromParty) == 0x000008, "Wrong alignment on WBP_PartyHUD_C_UpdateFromParty");
static_assert(sizeof(WBP_PartyHUD_C_UpdateFromParty) == 0x000150, "Wrong size on WBP_PartyHUD_C_UpdateFromParty");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, AllPartyMembers) == 0x000000, "Member 'WBP_PartyHUD_C_UpdateFromParty::AllPartyMembers' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000010, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetAllPartyMembers_ReturnValue) == 0x000020, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetAllPartyMembers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Set_ToArray_Result) == 0x000070, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, Temp_int_Loop_Counter_Variable) == 0x000080, "Member 'WBP_PartyHUD_C_UpdateFromParty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Less_IntInt_ReturnValue) == 0x000084, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Add_IntInt_ReturnValue) == 0x000088, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, Temp_int_Array_Index_Variable) == 0x00008C, "Member 'WBP_PartyHUD_C_UpdateFromParty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Array_Get_Item) == 0x000090, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_IsValid_ReturnValue) == 0x0000E0, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x0000E8, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetLocalPlayerSubsystem_ReturnValue_2) == 0x0000F0, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetLocalPlayerSubsystem_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetNetId_ReturnValue) == 0x0000F8, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetNetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_IsCurrentPartyValid_ReturnValue) == 0x000128, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_IsCurrentPartyValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_EqualEqual_ReturnValue) == 0x000129, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_EqualEqual_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Not_PreBool_ReturnValue) == 0x00012A, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_GetOwningPlayer_ReturnValue) == 0x000130, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_BooleanAND_ReturnValue) == 0x000138, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_Create_ReturnValue) == 0x000140, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PartyHUD_C_UpdateFromParty, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000148, "Member 'WBP_PartyHUD_C_UpdateFromParty::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");

}

