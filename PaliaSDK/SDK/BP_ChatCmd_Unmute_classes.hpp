#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatCmd_Unmute

#include "Basic.hpp"

#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChatCmd_Unmute.BP_ChatCmd_Unmute_C
// 0x0000 (0x0168 - 0x0168)
class UBP_ChatCmd_Unmute_C final  : public UVAL_ChatCommand_Unmute
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChatCmd_Unmute_C">();
	}
	static class UBP_ChatCmd_Unmute_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChatCmd_Unmute_C>();
	}
};
static_assert(alignof(UBP_ChatCmd_Unmute_C) == 0x000008, "Wrong alignment on UBP_ChatCmd_Unmute_C");
static_assert(sizeof(UBP_ChatCmd_Unmute_C) == 0x000168, "Wrong size on UBP_ChatCmd_Unmute_C");

}

