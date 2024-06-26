#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S_WindRanges

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct S_WindRanges.S_WindRanges
// 0x0040 (0x0040 - 0x0000)
struct FS_WindRanges final 
{
public:
	struct FFloatRange                            Calm_7_4798D754458F005B678E7BB5D01644CB;           // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            LightWind_8_A10495144CC73D8AEECE519D9648E466;      // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            HeavyWind_9_0B5DC2484A9876D9C58026937D9DFCBC;      // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFloatRange                            StormWind_12_9A740B8540B5CB215C993B9EBCDC23EC;     // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FS_WindRanges) == 0x000004, "Wrong alignment on FS_WindRanges");
static_assert(sizeof(FS_WindRanges) == 0x000040, "Wrong size on FS_WindRanges");
static_assert(offsetof(FS_WindRanges, Calm_7_4798D754458F005B678E7BB5D01644CB) == 0x000000, "Member 'FS_WindRanges::Calm_7_4798D754458F005B678E7BB5D01644CB' has a wrong offset!");
static_assert(offsetof(FS_WindRanges, LightWind_8_A10495144CC73D8AEECE519D9648E466) == 0x000010, "Member 'FS_WindRanges::LightWind_8_A10495144CC73D8AEECE519D9648E466' has a wrong offset!");
static_assert(offsetof(FS_WindRanges, HeavyWind_9_0B5DC2484A9876D9C58026937D9DFCBC) == 0x000020, "Member 'FS_WindRanges::HeavyWind_9_0B5DC2484A9876D9C58026937D9DFCBC' has a wrong offset!");
static_assert(offsetof(FS_WindRanges, StormWind_12_9A740B8540B5CB215C993B9EBCDC23EC) == 0x000030, "Member 'FS_WindRanges::StormWind_12_9A740B8540B5CB215C993B9EBCDC23EC' has a wrong offset!");

}

