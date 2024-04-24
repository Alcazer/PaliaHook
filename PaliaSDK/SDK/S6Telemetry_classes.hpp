#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6Telemetry

#include "Basic.hpp"

#include "S6Telemetry_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class S6Telemetry.S6Telemetry
// 0x0060 (0x0090 - 0x0030)
class US6Telemetry final  : public UGameInstanceSubsystem
{
public:
	uint8                                         Pad_1CAD[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FS6TelemtryPendingEnvelope>     Ingest_Queue;                                      // 0x0038(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1CAE[0x48];                                    // 0x0048(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"S6Telemetry">();
	}
	static class US6Telemetry* GetDefaultObj()
	{
		return GetDefaultObjImpl<US6Telemetry>();
	}
};
static_assert(alignof(US6Telemetry) == 0x000008, "Wrong alignment on US6Telemetry");
static_assert(sizeof(US6Telemetry) == 0x000090, "Wrong size on US6Telemetry");
static_assert(offsetof(US6Telemetry, Ingest_Queue) == 0x000038, "Member 'US6Telemetry::Ingest_Queue' has a wrong offset!");

}

