#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquippedAudioSet

#include "Basic.hpp"

#include "E_EquippedEvents_structs.hpp"


namespace SDK::Params
{

// Function EquippedAudioSet.EquippedAudioSet_C.Get Audio Event
// 0x0028 (0x0028 - 0x0000)
struct EquippedAudioSet_C_Get_Audio_Event final 
{
public:
	E_EquippedEvents                              Event;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D94[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AudioEvent;                                        // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3D95[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Map_Find_Value;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(EquippedAudioSet_C_Get_Audio_Event) == 0x000008, "Wrong alignment on EquippedAudioSet_C_Get_Audio_Event");
static_assert(sizeof(EquippedAudioSet_C_Get_Audio_Event) == 0x000028, "Wrong size on EquippedAudioSet_C_Get_Audio_Event");
static_assert(offsetof(EquippedAudioSet_C_Get_Audio_Event, Event) == 0x000000, "Member 'EquippedAudioSet_C_Get_Audio_Event::Event' has a wrong offset!");
static_assert(offsetof(EquippedAudioSet_C_Get_Audio_Event, AudioEvent) == 0x000008, "Member 'EquippedAudioSet_C_Get_Audio_Event::AudioEvent' has a wrong offset!");
static_assert(offsetof(EquippedAudioSet_C_Get_Audio_Event, Found) == 0x000010, "Member 'EquippedAudioSet_C_Get_Audio_Event::Found' has a wrong offset!");
static_assert(offsetof(EquippedAudioSet_C_Get_Audio_Event, CallFunc_Map_Find_Value) == 0x000018, "Member 'EquippedAudioSet_C_Get_Audio_Event::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(EquippedAudioSet_C_Get_Audio_Event, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'EquippedAudioSet_C_Get_Audio_Event::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

}

