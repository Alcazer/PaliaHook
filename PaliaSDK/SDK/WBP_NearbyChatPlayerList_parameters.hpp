#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NearbyChatPlayerList

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function WBP_NearbyChatPlayerList.WBP_NearbyChatPlayerList_C.ExecuteUbergraph_WBP_NearbyChatPlayerList
// 0x0008 (0x0008 - 0x0000)
struct WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList) == 0x000004, "Wrong alignment on WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList");
static_assert(sizeof(WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList) == 0x000008, "Wrong size on WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList, EntryPoint) == 0x000000, "Member 'WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList, K2Node_Event_IsDesignTime) == 0x000004, "Member 'WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList, CallFunc_Not_PreBool_ReturnValue) == 0x000005, "Member 'WBP_NearbyChatPlayerList_C_ExecuteUbergraph_WBP_NearbyChatPlayerList::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");

// Function WBP_NearbyChatPlayerList.WBP_NearbyChatPlayerList_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_NearbyChatPlayerList_C_PreConstruct final 
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerList_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_NearbyChatPlayerList_C_PreConstruct");
static_assert(sizeof(WBP_NearbyChatPlayerList_C_PreConstruct) == 0x000001, "Wrong size on WBP_NearbyChatPlayerList_C_PreConstruct");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_NearbyChatPlayerList_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function WBP_NearbyChatPlayerList.WBP_NearbyChatPlayerList_C.UpdatePlayers
// 0x0088 (0x0088 - 0x0000)
struct WBP_NearbyChatPlayerList_C_UpdatePlayers final 
{
public:
	TArray<class UBP_NearbyChatEntry_C*>          Players;                                           // 0x0000(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BBF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_NearbyChatEntry_C*                  CallFunc_SpawnObject_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UChatManager*                           CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC0[0x4];                                     // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FVAL_ChatProximityEntity>       CallFunc_GetPlayersInChatProximity_ReturnValue;    // 0x0040(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1BC1[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVAL_ChatProximityEntity               CallFunc_Array_Get_Item;                           // 0x0058(0x0028)(NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NearbyChatPlayerList_C_UpdatePlayers) == 0x000008, "Wrong alignment on WBP_NearbyChatPlayerList_C_UpdatePlayers");
static_assert(sizeof(WBP_NearbyChatPlayerList_C_UpdatePlayers) == 0x000088, "Wrong size on WBP_NearbyChatPlayerList_C_UpdatePlayers");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, Players) == 0x000000, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::Players' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_GetOwningPlayer_ReturnValue) == 0x000020, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_SpawnObject_ReturnValue) == 0x000028, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue) == 0x000030, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_Array_Add_ReturnValue) == 0x000038, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_GetPlayersInChatProximity_ReturnValue) == 0x000040, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_GetPlayersInChatProximity_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_Array_Length_ReturnValue) == 0x000050, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_Array_Get_Item) == 0x000058, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_NearbyChatPlayerList_C_UpdatePlayers, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'WBP_NearbyChatPlayerList_C_UpdatePlayers::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

