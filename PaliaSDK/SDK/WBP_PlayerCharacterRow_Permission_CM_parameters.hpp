#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlayerCharacterRow_Permission_CM

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "OnlineSubsystemValeria_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM
// 0x0258 (0x0258 - 0x0000)
struct WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CharacterId;                    // 0x0004(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DD[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOSSVAL_CharacterNameAndId             K2Node_CustomEvent_FetchedCharacter;               // 0x0018(0x0030)(ConstParm)
	TDelegate<void(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)> K2Node_CreateDelegate_OutputDelegate;              // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FOSSVAL_CharacterNameAndId             Temp_struct_Variable;                              // 0x0058(0x0030)()
	struct FGuid                                  Temp_struct_Variable_1;                            // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue; // 0x0098(0x0018)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DE[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B8(0x0018)()
	class UPresenceManager*                       CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UQueryManager*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x00D8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UQueryManager*                          CallFunc_GetGameInstanceSubsystem_ReturnValue_1;   // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue; // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                      CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel; // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53DF[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue; // 0x0100(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EHousingPermissionLevel                       CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1; // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53E0[0x7];                                     // 0x0109(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AHousingOwnershipActor*                 CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1; // 0x0110(0x0008)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Permission_Enum_To_Text_Text;             // 0x0118(0x0018)()
	class FText                                   CallFunc_Permission_Enum_To_Text_Text_1;           // 0x0130(0x0018)()
	struct FUniqueNetIdRepl                       K2Node_CustomEvent_PlayerNetId;                    // 0x0148(0x0030)(HasGetValueTypeHash)
	struct FGuid                                  K2Node_CustomEvent_CharacterId_1;                  // 0x0178(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPresence                              CallFunc_GetPresenceForUserId_ReturnValue;         // 0x0188(0x00B0)()
	class UOSSVAL_GetCharacterNameByCharacterIdProxy* CallFunc_GetCharacterNameByCharacterId_ReturnValue; // 0x0238(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FGuid& CharacterId)>    K2Node_CreateDelegate_OutputDelegate_1;            // 0x0240(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0250(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM) == 0x000008, "Wrong alignment on WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM");
static_assert(sizeof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM) == 0x000258, "Wrong size on WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, EntryPoint) == 0x000000, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CustomEvent_CharacterId) == 0x000004, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CustomEvent_CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CustomEvent_FetchedCharacter) == 0x000018, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CustomEvent_FetchedCharacter' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CreateDelegate_OutputDelegate) == 0x000048, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, Temp_struct_Variable) == 0x000058, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, Temp_struct_Variable_1) == 0x000088, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue) == 0x000098, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_PIEGetPlayerNameFromCharacterGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_TextIsEmpty_ReturnValue) == 0x0000B0, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B8, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x0000D0, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x0000D8, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetGameInstanceSubsystem_ReturnValue_1) == 0x0000E0, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetGameInstanceSubsystem_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue) == 0x0000E8, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1) == 0x0000F0, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_FindValeriaCharacterByPlayerGuid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel) == 0x0000F8, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue) == 0x000100, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1) == 0x000108, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1) == 0x000110, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_Permission_Enum_To_Text_Text) == 0x000118, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_Permission_Enum_To_Text_Text' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_Permission_Enum_To_Text_Text_1) == 0x000130, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_Permission_Enum_To_Text_Text_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CustomEvent_PlayerNetId) == 0x000148, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CustomEvent_PlayerNetId' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CustomEvent_CharacterId_1) == 0x000178, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CustomEvent_CharacterId_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetPresenceForUserId_ReturnValue) == 0x000188, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetPresenceForUserId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_GetCharacterNameByCharacterId_ReturnValue) == 0x000238, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_GetCharacterNameByCharacterId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, K2Node_CreateDelegate_OutputDelegate_1) == 0x000240, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM, CallFunc_IsValid_ReturnValue) == 0x000250, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_ExecuteUbergraph_WBP_PlayerCharacterRow_Permission_CM::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE final 
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE) == 0x000004, "Wrong alignment on WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE");
static_assert(sizeof(WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE) == 0x000010, "Wrong size on WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE, CharacterId) == 0x000000, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnFailure_D0CAC5EB4B224CBA08A4F2A01D4F26FE::CharacterId' has a wrong offset!");

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived final 
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived) == 0x000008, "Wrong alignment on WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived");
static_assert(sizeof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived) == 0x0001B0, "Wrong size on WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0000F8, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE final 
{
public:
	struct FGuid                                  CharacterId;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOSSVAL_CharacterNameAndId             FetchedCharacter;                                  // 0x0010(0x0030)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE) == 0x000008, "Wrong alignment on WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE");
static_assert(sizeof(WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE) == 0x000040, "Wrong size on WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE, CharacterId) == 0x000000, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE::CharacterId' has a wrong offset!");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE, FetchedCharacter) == 0x000010, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_OnSuccess_D0CAC5EB4B224CBA08A4F2A01D4F26FE::FetchedCharacter' has a wrong offset!");

// Function WBP_PlayerCharacterRow_Permission_CM.WBP_PlayerCharacterRow_Permission_CM_C.UpdatePlayer
// 0x0030 (0x0030 - 0x0000)
struct WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer final 
{
public:
	struct FUniqueNetIdRepl                       PlayerNetId;                                       // 0x0000(0x0030)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer) == 0x000008, "Wrong alignment on WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer");
static_assert(sizeof(WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer) == 0x000030, "Wrong size on WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer");
static_assert(offsetof(WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer, PlayerNetId) == 0x000000, "Member 'WBP_PlayerCharacterRow_Permission_CM_C_UpdatePlayer::PlayerNetId' has a wrong offset!");

}

