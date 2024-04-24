#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Mailbox

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "S6EnhancedInputExtended_structs.hpp"
#include "EnhancedInput_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function BP_Mailbox.BP_Mailbox_C.client_setGotMail
// 0x0038 (0x0038 - 0x0000)
struct BP_Mailbox_C_Client_setGotMail final 
{
public:
	class APlayerController*                      CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               K2Node_DynamicCast_AsValeria_Player_Controller;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5180[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaCharacter*                      CallFunc_GetValeriaCharacter_ReturnValue;          // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel; // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5181[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue; // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_Client_setGotMail) == 0x000008, "Wrong alignment on BP_Mailbox_C_Client_setGotMail");
static_assert(sizeof(BP_Mailbox_C_Client_setGotMail) == 0x000038, "Wrong size on BP_Mailbox_C_Client_setGotMail");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, CallFunc_GetPlayerControllerFromID_ReturnValue) == 0x000000, "Member 'BP_Mailbox_C_Client_setGotMail::CallFunc_GetPlayerControllerFromID_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, K2Node_DynamicCast_AsValeria_Player_Controller) == 0x000008, "Member 'BP_Mailbox_C_Client_setGotMail::K2Node_DynamicCast_AsValeria_Player_Controller' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'BP_Mailbox_C_Client_setGotMail::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, CallFunc_GetValeriaCharacter_ReturnValue) == 0x000018, "Member 'BP_Mailbox_C_Client_setGotMail::CallFunc_GetValeriaCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel) == 0x000020, "Member 'BP_Mailbox_C_Client_setGotMail::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue) == 0x000028, "Member 'BP_Mailbox_C_Client_setGotMail::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_Client_setGotMail, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_Mailbox_C_Client_setGotMail::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.ExecuteUbergraph_BP_Mailbox
// 0x0060 (0x0060 - 0x0000)
struct BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5182[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AValeriaPlayerController*               K2Node_Event_player;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FServerUseEventParams                  K2Node_Event_params;                               // 0x0010(0x0010)(NoDestructor)
	TDelegate<void(class UVillagerMailInboxComponent* InBox)> K2Node_CreateDelegate_OutputDelegate;              // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      K2Node_CustomEvent_Character;                      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVillagerMailInboxComponent*            K2Node_CustomEvent_inbox;                          // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasNewMail_ReturnValue;                   // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5183[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVillagerMailInboxComponent*            CallFunc_GetVillagerMailInbox_ReturnValue;         // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5184[0x7];                                     // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVillagerMailInboxComponent*            CallFunc_GetVillagerMailInbox_ReturnValue_1;       // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox) == 0x000008, "Wrong alignment on BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox");
static_assert(sizeof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox) == 0x000060, "Wrong size on BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, EntryPoint) == 0x000000, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, K2Node_Event_player) == 0x000008, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::K2Node_Event_player' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, K2Node_Event_params) == 0x000010, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::K2Node_Event_params' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, K2Node_CreateDelegate_OutputDelegate) == 0x000020, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, K2Node_CustomEvent_Character) == 0x000030, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::K2Node_CustomEvent_Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, K2Node_CustomEvent_inbox) == 0x000038, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::K2Node_CustomEvent_inbox' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, CallFunc_HasNewMail_ReturnValue) == 0x000040, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::CallFunc_HasNewMail_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, CallFunc_GetVillagerMailInbox_ReturnValue) == 0x000048, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::CallFunc_GetVillagerMailInbox_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox, CallFunc_GetVillagerMailInbox_ReturnValue_1) == 0x000058, "Member 'BP_Mailbox_C_ExecuteUbergraph_BP_Mailbox::CallFunc_GetVillagerMailInbox_ReturnValue_1' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.ListenForNewMail
// 0x0008 (0x0008 - 0x0000)
struct BP_Mailbox_C_ListenForNewMail final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_ListenForNewMail) == 0x000008, "Wrong alignment on BP_Mailbox_C_ListenForNewMail");
static_assert(sizeof(BP_Mailbox_C_ListenForNewMail) == 0x000008, "Wrong size on BP_Mailbox_C_ListenForNewMail");
static_assert(offsetof(BP_Mailbox_C_ListenForNewMail, Character) == 0x000000, "Member 'BP_Mailbox_C_ListenForNewMail::Character' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnClientInteract
// 0x0078 (0x0078 - 0x0000)
struct BP_Mailbox_C_OnClientInteract final 
{
public:
	class UInteractableComponent*                 Param_Interactable;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaPlayerController*               Player;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   Params_0;                                          // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUseEventResult                        ReturnValue;                                       // 0x0028(0x0010)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FUseEventResult                        CallFunc_UseEventResult_Handled_ReturnValue;       // 0x0038(0x0010)(NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5185[0x5];                                     // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UVAL_Subsystem_GameplayUIBridge*        CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IVAL_GameplayUIBridgeInterface> CallFunc_GetUIInterface_ReturnValue;               // 0x0058(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FUseEventResult                        CallFunc_UseEventResult_Unhandled_ReturnValue;     // 0x0068(0x0010)(NoDestructor)
};
static_assert(alignof(BP_Mailbox_C_OnClientInteract) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnClientInteract");
static_assert(sizeof(BP_Mailbox_C_OnClientInteract) == 0x000078, "Wrong size on BP_Mailbox_C_OnClientInteract");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, Param_Interactable) == 0x000000, "Member 'BP_Mailbox_C_OnClientInteract::Param_Interactable' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, Player) == 0x000008, "Member 'BP_Mailbox_C_OnClientInteract::Player' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, Params_0) == 0x000010, "Member 'BP_Mailbox_C_OnClientInteract::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, ReturnValue) == 0x000028, "Member 'BP_Mailbox_C_OnClientInteract::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_UseEventResult_Handled_ReturnValue) == 0x000038, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_UseEventResult_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000048, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000049, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_BooleanAND_ReturnValue) == 0x00004A, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000050, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_GetUIInterface_ReturnValue) == 0x000058, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_GetUIInterface_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientInteract, CallFunc_UseEventResult_Unhandled_ReturnValue) == 0x000068, "Member 'BP_Mailbox_C_OnClientInteract::CallFunc_UseEventResult_Unhandled_ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnClientUsedEquippedOnMe
// 0x0050 (0x0050 - 0x0000)
struct BP_Mailbox_C_OnClientUsedEquippedOnMe final 
{
public:
	class AValeriaPlayerController*               Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FUseEventParams                        Params_0;                                          // 0x0008(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FUseEventResult                        ReturnValue;                                       // 0x0030(0x0010)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FUseEventResult                        K2Node_MakeStruct_UseEventResult;                  // 0x0040(0x0010)(NoDestructor)
};
static_assert(alignof(BP_Mailbox_C_OnClientUsedEquippedOnMe) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnClientUsedEquippedOnMe");
static_assert(sizeof(BP_Mailbox_C_OnClientUsedEquippedOnMe) == 0x000050, "Wrong size on BP_Mailbox_C_OnClientUsedEquippedOnMe");
static_assert(offsetof(BP_Mailbox_C_OnClientUsedEquippedOnMe, Player) == 0x000000, "Member 'BP_Mailbox_C_OnClientUsedEquippedOnMe::Player' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientUsedEquippedOnMe, Params_0) == 0x000008, "Member 'BP_Mailbox_C_OnClientUsedEquippedOnMe::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientUsedEquippedOnMe, ReturnValue) == 0x000030, "Member 'BP_Mailbox_C_OnClientUsedEquippedOnMe::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnClientUsedEquippedOnMe, K2Node_MakeStruct_UseEventResult) == 0x000040, "Member 'BP_Mailbox_C_OnClientUsedEquippedOnMe::K2Node_MakeStruct_UseEventResult' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnMailChanged
// 0x0008 (0x0008 - 0x0000)
struct BP_Mailbox_C_OnMailChanged final 
{
public:
	class UVillagerMailInboxComponent*            InBox;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_OnMailChanged) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnMailChanged");
static_assert(sizeof(BP_Mailbox_C_OnMailChanged) == 0x000008, "Wrong size on BP_Mailbox_C_OnMailChanged");
static_assert(offsetof(BP_Mailbox_C_OnMailChanged, InBox) == 0x000000, "Member 'BP_Mailbox_C_OnMailChanged::InBox' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnRep_RepHasMail
// 0x0008 (0x0008 - 0x0000)
struct BP_Mailbox_C_OnRep_RepHasMail final 
{
public:
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0000(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_OnRep_RepHasMail) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnRep_RepHasMail");
static_assert(sizeof(BP_Mailbox_C_OnRep_RepHasMail) == 0x000008, "Wrong size on BP_Mailbox_C_OnRep_RepHasMail");
static_assert(offsetof(BP_Mailbox_C_OnRep_RepHasMail, CallFunc_K2_SetTimer_ReturnValue) == 0x000000, "Member 'BP_Mailbox_C_OnRep_RepHasMail::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnServerInteract
// 0x0030 (0x0030 - 0x0000)
struct BP_Mailbox_C_OnServerInteract final 
{
public:
	class UInteractableComponent*                 Param_Interactable;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      Character;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   EventParams;                                       // 0x0010(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FServerUseEventResult                  ReturnValue;                                       // 0x0028(0x0002)(Parm, OutParm, ReturnParm, NoDestructor)
};
static_assert(alignof(BP_Mailbox_C_OnServerInteract) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnServerInteract");
static_assert(sizeof(BP_Mailbox_C_OnServerInteract) == 0x000030, "Wrong size on BP_Mailbox_C_OnServerInteract");
static_assert(offsetof(BP_Mailbox_C_OnServerInteract, Param_Interactable) == 0x000000, "Member 'BP_Mailbox_C_OnServerInteract::Param_Interactable' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnServerInteract, Character) == 0x000008, "Member 'BP_Mailbox_C_OnServerInteract::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnServerInteract, EventParams) == 0x000010, "Member 'BP_Mailbox_C_OnServerInteract::EventParams' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnServerInteract, ReturnValue) == 0x000028, "Member 'BP_Mailbox_C_OnServerInteract::ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.OnServerUsedEquippedOnMe
// 0x0018 (0x0018 - 0x0000)
struct BP_Mailbox_C_OnServerUsedEquippedOnMe final 
{
public:
	class AValeriaPlayerController*               Player;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FServerUseEventParams                  Params_0;                                          // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_Mailbox_C_OnServerUsedEquippedOnMe) == 0x000008, "Wrong alignment on BP_Mailbox_C_OnServerUsedEquippedOnMe");
static_assert(sizeof(BP_Mailbox_C_OnServerUsedEquippedOnMe) == 0x000018, "Wrong size on BP_Mailbox_C_OnServerUsedEquippedOnMe");
static_assert(offsetof(BP_Mailbox_C_OnServerUsedEquippedOnMe, Player) == 0x000000, "Member 'BP_Mailbox_C_OnServerUsedEquippedOnMe::Player' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_OnServerUsedEquippedOnMe, Params_0) == 0x000008, "Member 'BP_Mailbox_C_OnServerUsedEquippedOnMe::Params_0' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.UserConstructionScript
// 0x0001 (0x0001 - 0x0000)
struct BP_Mailbox_C_UserConstructionScript final 
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_UserConstructionScript) == 0x000001, "Wrong alignment on BP_Mailbox_C_UserConstructionScript");
static_assert(sizeof(BP_Mailbox_C_UserConstructionScript) == 0x000001, "Wrong size on BP_Mailbox_C_UserConstructionScript");
static_assert(offsetof(BP_Mailbox_C_UserConstructionScript, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BP_Mailbox_C_UserConstructionScript::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.GetEventIndexForInputAction
// 0x0038 (0x0038 - 0x0000)
struct BP_Mailbox_C_GetEventIndexForInputAction final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UInputAction>            InputAction;                                       // 0x0008(0x0028)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
	EInteractEventIndex                           OutEventIndex;                                     // 0x0030(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0031(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_GetEventIndexForInputAction) == 0x000008, "Wrong alignment on BP_Mailbox_C_GetEventIndexForInputAction");
static_assert(sizeof(BP_Mailbox_C_GetEventIndexForInputAction) == 0x000038, "Wrong size on BP_Mailbox_C_GetEventIndexForInputAction");
static_assert(offsetof(BP_Mailbox_C_GetEventIndexForInputAction, Character) == 0x000000, "Member 'BP_Mailbox_C_GetEventIndexForInputAction::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetEventIndexForInputAction, InputAction) == 0x000008, "Member 'BP_Mailbox_C_GetEventIndexForInputAction::InputAction' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetEventIndexForInputAction, OutEventIndex) == 0x000030, "Member 'BP_Mailbox_C_GetEventIndexForInputAction::OutEventIndex' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetEventIndexForInputAction, ReturnValue) == 0x000031, "Member 'BP_Mailbox_C_GetEventIndexForInputAction::ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.GetInputActionForEventIndex
// 0x0038 (0x0038 - 0x0000)
struct BP_Mailbox_C_GetInputActionForEventIndex final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           EventIndex;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5186[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UInputAction>            ReturnValue;                                       // 0x0010(0x0028)(Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_GetInputActionForEventIndex) == 0x000008, "Wrong alignment on BP_Mailbox_C_GetInputActionForEventIndex");
static_assert(sizeof(BP_Mailbox_C_GetInputActionForEventIndex) == 0x000038, "Wrong size on BP_Mailbox_C_GetInputActionForEventIndex");
static_assert(offsetof(BP_Mailbox_C_GetInputActionForEventIndex, Character) == 0x000000, "Member 'BP_Mailbox_C_GetInputActionForEventIndex::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetInputActionForEventIndex, EventIndex) == 0x000008, "Member 'BP_Mailbox_C_GetInputActionForEventIndex::EventIndex' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetInputActionForEventIndex, ReturnValue) == 0x000010, "Member 'BP_Mailbox_C_GetInputActionForEventIndex::ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.GetText
// 0x00D0 (0x00D0 - 0x0000)
struct BP_Mailbox_C_GetText final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           EventIndex;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5187[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGetTextParams                         Params_0;                                          // 0x0010(0x0050)(Parm, OutParm)
	bool                                          ReturnValue;                                       // 0x0060(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5188[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FShopItemAdditionalCost>        K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5189[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGetTextParams                         K2Node_MakeStruct_GetTextParams;                   // 0x0080(0x0050)()
};
static_assert(alignof(BP_Mailbox_C_GetText) == 0x000008, "Wrong alignment on BP_Mailbox_C_GetText");
static_assert(sizeof(BP_Mailbox_C_GetText) == 0x0000D0, "Wrong size on BP_Mailbox_C_GetText");
static_assert(offsetof(BP_Mailbox_C_GetText, Character) == 0x000000, "Member 'BP_Mailbox_C_GetText::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, EventIndex) == 0x000008, "Member 'BP_Mailbox_C_GetText::EventIndex' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, Params_0) == 0x000010, "Member 'BP_Mailbox_C_GetText::Params_0' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, ReturnValue) == 0x000060, "Member 'BP_Mailbox_C_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, K2Node_MakeArray_Array) == 0x000068, "Member 'BP_Mailbox_C_GetText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000078, "Member 'BP_Mailbox_C_GetText::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetText, K2Node_MakeStruct_GetTextParams) == 0x000080, "Member 'BP_Mailbox_C_GetText::K2Node_MakeStruct_GetTextParams' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.GetUseableIMC
// 0x0050 (0x0050 - 0x0000)
struct BP_Mailbox_C_GetUseableIMC final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EInteractEventIndex                           InteractIndex;                                     // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_518A[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInputMappingPriorityData              OutMappingData;                                    // 0x0010(0x0038)(Parm, OutParm)
	struct FModifyContextOptions                  OutOptions;                                        // 0x0048(0x0001)(Parm, OutParm, NoDestructor)
	bool                                          ReturnValue;                                       // 0x0049(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_GetUseableIMC) == 0x000008, "Wrong alignment on BP_Mailbox_C_GetUseableIMC");
static_assert(sizeof(BP_Mailbox_C_GetUseableIMC) == 0x000050, "Wrong size on BP_Mailbox_C_GetUseableIMC");
static_assert(offsetof(BP_Mailbox_C_GetUseableIMC, Character) == 0x000000, "Member 'BP_Mailbox_C_GetUseableIMC::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetUseableIMC, InteractIndex) == 0x000008, "Member 'BP_Mailbox_C_GetUseableIMC::InteractIndex' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetUseableIMC, OutMappingData) == 0x000010, "Member 'BP_Mailbox_C_GetUseableIMC::OutMappingData' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetUseableIMC, OutOptions) == 0x000048, "Member 'BP_Mailbox_C_GetUseableIMC::OutOptions' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_GetUseableIMC, ReturnValue) == 0x000049, "Member 'BP_Mailbox_C_GetUseableIMC::ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.InteractPriority
// 0x0010 (0x0010 - 0x0000)
struct BP_Mailbox_C_InteractPriority final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         ReturnValue;                                       // 0x0008(0x0004)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_InteractPriority) == 0x000008, "Wrong alignment on BP_Mailbox_C_InteractPriority");
static_assert(sizeof(BP_Mailbox_C_InteractPriority) == 0x000010, "Wrong size on BP_Mailbox_C_InteractPriority");
static_assert(offsetof(BP_Mailbox_C_InteractPriority, Character) == 0x000000, "Member 'BP_Mailbox_C_InteractPriority::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_InteractPriority, ReturnValue) == 0x000008, "Member 'BP_Mailbox_C_InteractPriority::ReturnValue' has a wrong offset!");

// Function BP_Mailbox.BP_Mailbox_C.IsInteractable
// 0x0040 (0x0040 - 0x0000)
struct BP_Mailbox_C_IsInteractable final 
{
public:
	class AValeriaCharacter*                      Character;                                         // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractEventParams                   EventParams;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          ReturnValue;                                       // 0x0020(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       Temp_byte_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel; // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_518B[0x5];                                     // 0x0023(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue; // 0x0028(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0032(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0033(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_3;                              // 0x0036(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_4;                              // 0x0037(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_5;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_6;                              // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_7;                              // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_8;                              // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_9;                              // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default;                             // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Mailbox_C_IsInteractable) == 0x000008, "Wrong alignment on BP_Mailbox_C_IsInteractable");
static_assert(sizeof(BP_Mailbox_C_IsInteractable) == 0x000040, "Wrong size on BP_Mailbox_C_IsInteractable");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Character) == 0x000000, "Member 'BP_Mailbox_C_IsInteractable::Character' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, EventParams) == 0x000008, "Member 'BP_Mailbox_C_IsInteractable::EventParams' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, ReturnValue) == 0x000020, "Member 'BP_Mailbox_C_IsInteractable::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_byte_Variable) == 0x000021, "Member 'BP_Mailbox_C_IsInteractable::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel) == 0x000022, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue) == 0x000028, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000030, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_IsValid_ReturnValue) == 0x000031, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_Not_PreBool_ReturnValue) == 0x000032, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable) == 0x000033, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_1) == 0x000034, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_2) == 0x000035, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_3) == 0x000036, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_4) == 0x000037, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_4' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_5) == 0x000038, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_5' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_6) == 0x000039, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_6' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_7) == 0x00003A, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_7' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_8) == 0x00003B, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_8' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, Temp_bool_Variable_9) == 0x00003C, "Member 'BP_Mailbox_C_IsInteractable::Temp_bool_Variable_9' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, K2Node_Select_Default) == 0x00003D, "Member 'BP_Mailbox_C_IsInteractable::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(BP_Mailbox_C_IsInteractable, CallFunc_BooleanOR_ReturnValue) == 0x00003E, "Member 'BP_Mailbox_C_IsInteractable::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

}

