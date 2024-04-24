#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: S6AssetReleaseTargetingDeveloper

#include "Basic.hpp"

#include "S6AssetReleaseTargetingCore_structs.hpp"


namespace SDK
{

// ScriptStruct S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingInfo
// 0x0060 (0x0060 - 0x0000)
struct FS6AssetReleaseTargetingInfo final 
{
public:
	bool                                          bIsDeveloperOnly;                                  // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_32DA[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSet<class FName>                             RequiredWIPRuntimeFeatureFlags;                    // 0x0008(0x0050)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification         ReleaseVersionSpec;                                // 0x0058(0x0008)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FS6AssetReleaseTargetingInfo) == 0x000008, "Wrong alignment on FS6AssetReleaseTargetingInfo");
static_assert(sizeof(FS6AssetReleaseTargetingInfo) == 0x000060, "Wrong size on FS6AssetReleaseTargetingInfo");
static_assert(offsetof(FS6AssetReleaseTargetingInfo, bIsDeveloperOnly) == 0x000000, "Member 'FS6AssetReleaseTargetingInfo::bIsDeveloperOnly' has a wrong offset!");
static_assert(offsetof(FS6AssetReleaseTargetingInfo, RequiredWIPRuntimeFeatureFlags) == 0x000008, "Member 'FS6AssetReleaseTargetingInfo::RequiredWIPRuntimeFeatureFlags' has a wrong offset!");
static_assert(offsetof(FS6AssetReleaseTargetingInfo, ReleaseVersionSpec) == 0x000058, "Member 'FS6AssetReleaseTargetingInfo::ReleaseVersionSpec' has a wrong offset!");

}

