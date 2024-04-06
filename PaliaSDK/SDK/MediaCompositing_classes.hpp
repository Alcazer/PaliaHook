#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediaCompositing

#include "Basic.hpp"

#include "MovieScene_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "MediaAssets_structs.hpp"


namespace SDK
{

// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneMediaPlayerPropertySection final  : public UMovieSceneSection
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLoop;                                             // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2652[0x7];                                     // 0x00F9(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaPlayerPropertySection">();
	}
	static class UMovieSceneMediaPlayerPropertySection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaPlayerPropertySection>();
	}
};
static_assert(alignof(UMovieSceneMediaPlayerPropertySection) == 0x000008, "Wrong alignment on UMovieSceneMediaPlayerPropertySection");
static_assert(sizeof(UMovieSceneMediaPlayerPropertySection) == 0x000100, "Wrong size on UMovieSceneMediaPlayerPropertySection");
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, MediaSource) == 0x0000F0, "Member 'UMovieSceneMediaPlayerPropertySection::MediaSource' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaPlayerPropertySection, bLoop) == 0x0000F8, "Member 'UMovieSceneMediaPlayerPropertySection::bLoop' has a wrong offset!");

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// 0x0008 (0x00D0 - 0x00C8)
class UMovieSceneMediaPlayerPropertyTrack final  : public UMovieScenePropertyTrack
{
public:
	uint8                                         Pad_2653[0x8];                                     // 0x00C8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaPlayerPropertyTrack">();
	}
	static class UMovieSceneMediaPlayerPropertyTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaPlayerPropertyTrack>();
	}
};
static_assert(alignof(UMovieSceneMediaPlayerPropertyTrack) == 0x000008, "Wrong alignment on UMovieSceneMediaPlayerPropertyTrack");
static_assert(sizeof(UMovieSceneMediaPlayerPropertyTrack) == 0x0000D0, "Wrong size on UMovieSceneMediaPlayerPropertyTrack");

// Class MediaCompositing.MovieSceneMediaSection
// 0x0040 (0x0130 - 0x00F0)
class UMovieSceneMediaSection final  : public UMovieSceneSection
{
public:
	class UMediaSource*                           MediaSource;                                       // 0x00F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bLooping;                                          // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2654[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFrameNumber                           StartFrameOffset;                                  // 0x00FC(0x0004)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                          MediaTexture;                                      // 0x0100(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                   MediaSoundComponent;                               // 0x0108(0x0008)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bUseExternalMediaPlayer;                           // 0x0110(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2655[0x7];                                     // 0x0111(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaPlayer*                           ExternalMediaPlayer;                               // 0x0118(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaSourceCacheSettings              CacheSettings;                                     // 0x0120(0x0008)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                          bHasMediaPlayerProxy;                              // 0x0128(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2656[0x7];                                     // 0x0129(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaSection">();
	}
	static class UMovieSceneMediaSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaSection>();
	}
};
static_assert(alignof(UMovieSceneMediaSection) == 0x000008, "Wrong alignment on UMovieSceneMediaSection");
static_assert(sizeof(UMovieSceneMediaSection) == 0x000130, "Wrong size on UMovieSceneMediaSection");
static_assert(offsetof(UMovieSceneMediaSection, MediaSource) == 0x0000F0, "Member 'UMovieSceneMediaSection::MediaSource' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, bLooping) == 0x0000F8, "Member 'UMovieSceneMediaSection::bLooping' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, StartFrameOffset) == 0x0000FC, "Member 'UMovieSceneMediaSection::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, MediaTexture) == 0x000100, "Member 'UMovieSceneMediaSection::MediaTexture' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, MediaSoundComponent) == 0x000108, "Member 'UMovieSceneMediaSection::MediaSoundComponent' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, bUseExternalMediaPlayer) == 0x000110, "Member 'UMovieSceneMediaSection::bUseExternalMediaPlayer' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, ExternalMediaPlayer) == 0x000118, "Member 'UMovieSceneMediaSection::ExternalMediaPlayer' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, CacheSettings) == 0x000120, "Member 'UMovieSceneMediaSection::CacheSettings' has a wrong offset!");
static_assert(offsetof(UMovieSceneMediaSection, bHasMediaPlayerProxy) == 0x000128, "Member 'UMovieSceneMediaSection::bHasMediaPlayerProxy' has a wrong offset!");

// Class MediaCompositing.MovieSceneMediaTrack
// 0x0018 (0x00B0 - 0x0098)
class UMovieSceneMediaTrack final  : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_2657[0x8];                                     // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             MediaSections;                                     // 0x00A0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneMediaTrack">();
	}
	static class UMovieSceneMediaTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneMediaTrack>();
	}
};
static_assert(alignof(UMovieSceneMediaTrack) == 0x000008, "Wrong alignment on UMovieSceneMediaTrack");
static_assert(sizeof(UMovieSceneMediaTrack) == 0x0000B0, "Wrong size on UMovieSceneMediaTrack");
static_assert(offsetof(UMovieSceneMediaTrack, MediaSections) == 0x0000A0, "Member 'UMovieSceneMediaTrack::MediaSections' has a wrong offset!");

}

