#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DialogBookendAudioSet

#include "Basic.hpp"


namespace SDK::Params
{

// Function DialogBookendAudioSet.DialogBookendAudioSet_C.GetRandomDialogEvent
// 0x0030 (0x0030 - 0x0000)
struct DialogBookendAudioSet_C_GetRandomDialogEvent final 
{
public:
	class UAkAudioEvent*                          DialogEvent;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkAudioEvent*>                  CallFunc_Set_ToArray_Result;                       // 0x0008(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_40F3[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Array_Random_OutItem;                     // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Random_OutIndex;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DialogBookendAudioSet_C_GetRandomDialogEvent) == 0x000008, "Wrong alignment on DialogBookendAudioSet_C_GetRandomDialogEvent");
static_assert(sizeof(DialogBookendAudioSet_C_GetRandomDialogEvent) == 0x000030, "Wrong size on DialogBookendAudioSet_C_GetRandomDialogEvent");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, DialogEvent) == 0x000000, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::DialogEvent' has a wrong offset!");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, CallFunc_Set_ToArray_Result) == 0x000008, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::CallFunc_Set_ToArray_Result' has a wrong offset!");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, CallFunc_Array_Random_OutItem) == 0x000020, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::CallFunc_Array_Random_OutItem' has a wrong offset!");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, CallFunc_Array_Random_OutIndex) == 0x000028, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::CallFunc_Array_Random_OutIndex' has a wrong offset!");
static_assert(offsetof(DialogBookendAudioSet_C_GetRandomDialogEvent, CallFunc_Greater_IntInt_ReturnValue) == 0x00002C, "Member 'DialogBookendAudioSet_C_GetRandomDialogEvent::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}

