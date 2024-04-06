#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6Persist

#include "Basic.hpp"


namespace SDK::Params
{

// Function S6Persist.S6PersistSubsystem.HandlePendingOpSetComplete
// 0x0001 (0x0001 - 0x0000)
struct S6PersistSubsystem_HandlePendingOpSetComplete final 
{
public:
	bool                                          bSuccess;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(S6PersistSubsystem_HandlePendingOpSetComplete) == 0x000001, "Wrong alignment on S6PersistSubsystem_HandlePendingOpSetComplete");
static_assert(sizeof(S6PersistSubsystem_HandlePendingOpSetComplete) == 0x000001, "Wrong size on S6PersistSubsystem_HandlePendingOpSetComplete");
static_assert(offsetof(S6PersistSubsystem_HandlePendingOpSetComplete, bSuccess) == 0x000000, "Member 'S6PersistSubsystem_HandlePendingOpSetComplete::bSuccess' has a wrong offset!");

}

