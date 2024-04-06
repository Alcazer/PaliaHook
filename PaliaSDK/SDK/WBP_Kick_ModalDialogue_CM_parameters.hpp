#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Kick_ModalDialogue_CM

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function WBP_Kick_ModalDialogue_CM.WBP_Kick_ModalDialogue_CM_C.BlockErrorSent__DelegateSignature
// 0x0038 (0x0038 - 0x0000)
struct WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature final 
{
public:
	struct FUniqueNetIdRepl                       UserId;                                            // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	EVAL_SocialBlockError                         BlockError;                                        // 0x0030(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature");
static_assert(sizeof(WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature) == 0x000038, "Wrong size on WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature, UserId) == 0x000000, "Member 'WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature::UserId' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature, BlockError) == 0x000030, "Member 'WBP_Kick_ModalDialogue_CM_C_BlockErrorSent__DelegateSignature::BlockError' has a wrong offset!");

// Function WBP_Kick_ModalDialogue_CM.WBP_Kick_ModalDialogue_CM_C.BP_OnHandleBackAction
// 0x0001 (0x0001 - 0x0000)
struct WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction final 
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction) == 0x000001, "Wrong alignment on WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction");
static_assert(sizeof(WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction) == 0x000001, "Wrong size on WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction, ReturnValue) == 0x000000, "Member 'WBP_Kick_ModalDialogue_CM_C_BP_OnHandleBackAction::ReturnValue' has a wrong offset!");

// Function WBP_Kick_ModalDialogue_CM.WBP_Kick_ModalDialogue_CM_C.ExecuteUbergraph_WBP_Kick_ModalDialogue_CM
// 0x01F0 (0x01F0 - 0x0000)
struct WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CCF[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_AkEventGlobal_ReturnValue;                // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD0[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class US6UI_UIManagerWidgetBase*              CallFunc_GetUIManagerWidget_ReturnValue;           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_SelectInt_ReturnValue;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult;     // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD1[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue;   // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel; // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD2[0x6];                                     // 0x003A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue; // 0x0040(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPresenceManager*                       CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EValeriaFuncResult                            CallFunc_GetValeriaPlayerController_OutResult_1;   // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD3[0x6];                                     // 0x0052(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               CallFunc_GetValeriaPlayerController_ReturnValue_1; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPresenceManager*                       CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;    // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue_1;        // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPresence                              CallFunc_GetPresenceForUserId_ReturnValue;         // 0x0070(0x00B0)()
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD4[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1; // 0x0128(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4CD5[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_AkEventGlobal_ReturnValue_1;              // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPresence                              CallFunc_GetPresenceForUserId_ReturnValue_1;       // 0x0138(0x00B0)()
	class UWBP_PlayerCharacterRow_Permission_CM_C* K2Node_Select_Default;                             // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM) == 0x000008, "Wrong alignment on WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM");
static_assert(sizeof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM) == 0x0001F0, "Wrong size on WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, EntryPoint) == 0x000000, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, Temp_bool_Variable) == 0x000004, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetOwningPlayer_ReturnValue) == 0x000008, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_AkEventGlobal_ReturnValue) == 0x000010, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_AkEventGlobal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetUIManagerWidget_ReturnValue) == 0x000018, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetUIManagerWidget_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_SelectInt_ReturnValue) == 0x000020, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_SelectInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaPlayerController_OutResult) == 0x000024, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaPlayerController_OutResult' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaPlayerController_ReturnValue) == 0x000028, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000030, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, K2Node_SwitchEnum_CmpSuccess) == 0x000038, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel) == 0x000039, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue) == 0x000040, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000048, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaPlayerController_OutResult_1) == 0x000051, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaPlayerController_OutResult_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaPlayerController_ReturnValue_1) == 0x000058, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue_1) == 0x000060, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetValeriaCharacter_ReturnValue_1) == 0x000068, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetValeriaCharacter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetPresenceForUserId_ReturnValue) == 0x000070, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetPresenceForUserId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1) == 0x000120, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1) == 0x000128, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_IsValid_ReturnValue_1) == 0x000130, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, K2Node_SwitchEnum_CmpSuccess_1) == 0x000131, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_AkEventGlobal_ReturnValue_1) == 0x000134, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_AkEventGlobal_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, CallFunc_GetPresenceForUserId_ReturnValue_1) == 0x000138, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::CallFunc_GetPresenceForUserId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM, K2Node_Select_Default) == 0x0001E8, "Member 'WBP_Kick_ModalDialogue_CM_C_ExecuteUbergraph_WBP_Kick_ModalDialogue_CM::K2Node_Select_Default' has a wrong offset!");

}

