#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Comp_CreatureAudio

#include "Basic.hpp"

#include "E_CreatureAudioEvents_structs.hpp"


namespace SDK::Params
{

// Function Comp_CreatureAudio.Comp_CreatureAudio_C.FindInCreatureSurfaceMap
// 0x0028 (0x0028 - 0x0000)
struct Comp_CreatureAudio_C_FindInCreatureSurfaceMap final 
{
public:
	class FName                                   Key;                                               // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysmatEffect_C*                       Value;                                             // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4103[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPhysmatEffect_C*                       CallFunc_Map_Find_Value;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap) == 0x000008, "Wrong alignment on Comp_CreatureAudio_C_FindInCreatureSurfaceMap");
static_assert(sizeof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap) == 0x000028, "Wrong size on Comp_CreatureAudio_C_FindInCreatureSurfaceMap");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, Key) == 0x000000, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::Key' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, Value) == 0x000008, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::Value' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, Found) == 0x000010, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::Found' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, CallFunc_Map_Find_Value) == 0x000018, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, CallFunc_Map_Find_ReturnValue) == 0x000020, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, CallFunc_IsValid_ReturnValue) == 0x000021, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_FindInCreatureSurfaceMap, CallFunc_BooleanAND_ReturnValue) == 0x000022, "Member 'Comp_CreatureAudio_C_FindInCreatureSurfaceMap::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function Comp_CreatureAudio.Comp_CreatureAudio_C.GetCreatureAudioEvent
// 0x0028 (0x0028 - 0x0000)
struct Comp_CreatureAudio_C_GetCreatureAudioEvent final 
{
public:
	E_CreatureAudioEvents                         Event;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4104[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          AkEvent;                                           // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Found;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4105[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          CallFunc_Get_Creature_Audio_Event_AkEvent;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Get_Creature_Audio_Event_Found;           // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Comp_CreatureAudio_C_GetCreatureAudioEvent) == 0x000008, "Wrong alignment on Comp_CreatureAudio_C_GetCreatureAudioEvent");
static_assert(sizeof(Comp_CreatureAudio_C_GetCreatureAudioEvent) == 0x000028, "Wrong size on Comp_CreatureAudio_C_GetCreatureAudioEvent");
static_assert(offsetof(Comp_CreatureAudio_C_GetCreatureAudioEvent, Event) == 0x000000, "Member 'Comp_CreatureAudio_C_GetCreatureAudioEvent::Event' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_GetCreatureAudioEvent, AkEvent) == 0x000008, "Member 'Comp_CreatureAudio_C_GetCreatureAudioEvent::AkEvent' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_GetCreatureAudioEvent, Found) == 0x000010, "Member 'Comp_CreatureAudio_C_GetCreatureAudioEvent::Found' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_GetCreatureAudioEvent, CallFunc_Get_Creature_Audio_Event_AkEvent) == 0x000018, "Member 'Comp_CreatureAudio_C_GetCreatureAudioEvent::CallFunc_Get_Creature_Audio_Event_AkEvent' has a wrong offset!");
static_assert(offsetof(Comp_CreatureAudio_C_GetCreatureAudioEvent, CallFunc_Get_Creature_Audio_Event_Found) == 0x000020, "Member 'Comp_CreatureAudio_C_GetCreatureAudioEvent::CallFunc_Get_Creature_Audio_Event_Found' has a wrong offset!");

}

