#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaUtils

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// Enum MediaUtils.EMediaPlayerOptionBooleanOverride
// NumValues: 0x0004
enum class EMediaPlayerOptionBooleanOverride : uint8
{
	UseMediaPlayerSetting                    = 0,
	Enabled                                  = 1,
	Disabled                                 = 2,
	EMediaPlayerOptionBooleanOverride_MAX    = 3,
};

// ScriptStruct MediaUtils.MediaPlayerTrackOptions
// 0x001C (0x001C - 0x0000)
struct FMediaPlayerTrackOptions final 
{
public:
	int32                                         Audio;                                             // 0x0000(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Caption;                                           // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MetaData;                                          // 0x0008(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Script;                                            // 0x000C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Subtitle;                                          // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Text;                                              // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Video;                                             // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMediaPlayerTrackOptions) == 0x000004, "Wrong alignment on FMediaPlayerTrackOptions");
static_assert(sizeof(FMediaPlayerTrackOptions) == 0x00001C, "Wrong size on FMediaPlayerTrackOptions");
static_assert(offsetof(FMediaPlayerTrackOptions, Audio) == 0x000000, "Member 'FMediaPlayerTrackOptions::Audio' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Caption) == 0x000004, "Member 'FMediaPlayerTrackOptions::Caption' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, MetaData) == 0x000008, "Member 'FMediaPlayerTrackOptions::MetaData' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Script) == 0x00000C, "Member 'FMediaPlayerTrackOptions::Script' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Subtitle) == 0x000010, "Member 'FMediaPlayerTrackOptions::Subtitle' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Text) == 0x000014, "Member 'FMediaPlayerTrackOptions::Text' has a wrong offset!");
static_assert(offsetof(FMediaPlayerTrackOptions, Video) == 0x000018, "Member 'FMediaPlayerTrackOptions::Video' has a wrong offset!");

// ScriptStruct MediaUtils.MediaPlayerOptions
// 0x0030 (0x0030 - 0x0000)
struct FMediaPlayerOptions final 
{
public:
	struct FMediaPlayerTrackOptions               Tracks;                                            // 0x0000(0x001C)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DCF[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              SeekTime;                                          // 0x0020(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaPlayerOptionBooleanOverride             PlayOnOpen;                                        // 0x0028(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EMediaPlayerOptionBooleanOverride             Loop;                                              // 0x0029(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_3DD0[0x6];                                     // 0x002A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FMediaPlayerOptions) == 0x000008, "Wrong alignment on FMediaPlayerOptions");
static_assert(sizeof(FMediaPlayerOptions) == 0x000030, "Wrong size on FMediaPlayerOptions");
static_assert(offsetof(FMediaPlayerOptions, Tracks) == 0x000000, "Member 'FMediaPlayerOptions::Tracks' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, SeekTime) == 0x000020, "Member 'FMediaPlayerOptions::SeekTime' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, PlayOnOpen) == 0x000028, "Member 'FMediaPlayerOptions::PlayOnOpen' has a wrong offset!");
static_assert(offsetof(FMediaPlayerOptions, Loop) == 0x000029, "Member 'FMediaPlayerOptions::Loop' has a wrong offset!");

}

