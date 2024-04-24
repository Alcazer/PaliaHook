#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NetCore

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "NetCore_structs.hpp"


namespace SDK
{

// Class NetCore.NetAnalyticsAggregatorConfig
// 0x0010 (0x0038 - 0x0028)
class UNetAnalyticsAggregatorConfig final  : public UObject
{
public:
	TArray<struct FNetAnalyticsDataConfig>        NetAnalyticsData;                                  // 0x0028(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"NetAnalyticsAggregatorConfig">();
	}
	static class UNetAnalyticsAggregatorConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNetAnalyticsAggregatorConfig>();
	}
};
static_assert(alignof(UNetAnalyticsAggregatorConfig) == 0x000008, "Wrong alignment on UNetAnalyticsAggregatorConfig");
static_assert(sizeof(UNetAnalyticsAggregatorConfig) == 0x000038, "Wrong size on UNetAnalyticsAggregatorConfig");
static_assert(offsetof(UNetAnalyticsAggregatorConfig, NetAnalyticsData) == 0x000028, "Member 'UNetAnalyticsAggregatorConfig::NetAnalyticsData' has a wrong offset!");

// Class NetCore.StatePerObjectConfig
// 0x0040 (0x0068 - 0x0028)
class UStatePerObjectConfig : public UObject
{
public:
	uint8                                         Pad_1228[0x28];                                    // 0x0028(0x0028)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 PerObjectConfigSection;                            // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bEnabled;                                          // 0x0060(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1229[0x7];                                     // 0x0061(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"StatePerObjectConfig">();
	}
	static class UStatePerObjectConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStatePerObjectConfig>();
	}
};
static_assert(alignof(UStatePerObjectConfig) == 0x000008, "Wrong alignment on UStatePerObjectConfig");
static_assert(sizeof(UStatePerObjectConfig) == 0x000068, "Wrong size on UStatePerObjectConfig");
static_assert(offsetof(UStatePerObjectConfig, PerObjectConfigSection) == 0x000050, "Member 'UStatePerObjectConfig::PerObjectConfigSection' has a wrong offset!");
static_assert(offsetof(UStatePerObjectConfig, bEnabled) == 0x000060, "Member 'UStatePerObjectConfig::bEnabled' has a wrong offset!");

// Class NetCore.EscalationManagerConfig
// 0x0020 (0x0088 - 0x0068)
class UEscalationManagerConfig : public UStatePerObjectConfig
{
public:
	TArray<class FString>                         EscalationSeverity;                                // 0x0068(0x0010)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                         Pad_122A[0x10];                                    // 0x0078(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EscalationManagerConfig">();
	}
	static class UEscalationManagerConfig* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEscalationManagerConfig>();
	}
};
static_assert(alignof(UEscalationManagerConfig) == 0x000008, "Wrong alignment on UEscalationManagerConfig");
static_assert(sizeof(UEscalationManagerConfig) == 0x000088, "Wrong size on UEscalationManagerConfig");
static_assert(offsetof(UEscalationManagerConfig, EscalationSeverity) == 0x000068, "Member 'UEscalationManagerConfig::EscalationSeverity' has a wrong offset!");

}

