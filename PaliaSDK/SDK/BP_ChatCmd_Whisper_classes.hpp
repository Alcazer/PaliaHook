#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ChatCmd_Whisper

#include "Basic.hpp"

#include "Palia_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ChatCmd_Whisper.BP_ChatCmd_Whisper_C
// 0x0000 (0x0158 - 0x0158)
class UBP_ChatCmd_Whisper_C final  : public UVAL_ChatCommand_Whisper
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ChatCmd_Whisper_C">();
	}
	static class UBP_ChatCmd_Whisper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ChatCmd_Whisper_C>();
	}
};
static_assert(alignof(UBP_ChatCmd_Whisper_C) == 0x000008, "Wrong alignment on UBP_ChatCmd_Whisper_C");
static_assert(sizeof(UBP_ChatCmd_Whisper_C) == 0x000158, "Wrong size on UBP_ChatCmd_Whisper_C");

}

