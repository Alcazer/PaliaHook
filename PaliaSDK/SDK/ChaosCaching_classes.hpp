#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChaosCaching

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "ChaosCaching_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "MovieSceneTracks_classes.hpp"
#include "MovieScene_classes.hpp"


namespace SDK
{

// Class ChaosCaching.ChaosCacheCollection
// 0x0010 (0x0038 - 0x0028)
class UChaosCacheCollection final  : public UObject
{
public:
	TArray<class UChaosCache*>                    Caches;                                            // 0x0028(0x0010)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCacheCollection">();
	}
	static class UChaosCacheCollection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosCacheCollection>();
	}
};
static_assert(alignof(UChaosCacheCollection) == 0x000008, "Wrong alignment on UChaosCacheCollection");
static_assert(sizeof(UChaosCacheCollection) == 0x000038, "Wrong size on UChaosCacheCollection");
static_assert(offsetof(UChaosCacheCollection, Caches) == 0x000028, "Member 'UChaosCacheCollection::Caches' has a wrong offset!");

// Class ChaosCaching.ChaosCacheManager
// 0x00A8 (0x0348 - 0x02A0)
class AChaosCacheManager : public AActor
{
public:
	class UChaosCacheCollection*                  CacheCollection;                                   // 0x02A0(0x0008)(Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	ECacheMode                                    CacheMode;                                         // 0x02A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EStartMode                                    StartMode;                                         // 0x02A9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25BF[0x2];                                     // 0x02AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTime;                                         // 0x02AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_25C0[0x8];                                     // 0x02B0(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FObservedComponent>             ObservedComponents;                                // 0x02B8(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25C1[0x80];                                    // 0x02C8(0x0080)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ResetAllComponentTransforms();
	void ResetSingleTransform(int32 InIndex);
	void SetStartTime(float InStartTime);
	void TriggerAll();
	void TriggerComponent(class UPrimitiveComponent* InComponent);
	void TriggerComponentByCache(class FName InCacheName);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCacheManager">();
	}
	static class AChaosCacheManager* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosCacheManager>();
	}
};
static_assert(alignof(AChaosCacheManager) == 0x000008, "Wrong alignment on AChaosCacheManager");
static_assert(sizeof(AChaosCacheManager) == 0x000348, "Wrong size on AChaosCacheManager");
static_assert(offsetof(AChaosCacheManager, CacheCollection) == 0x0002A0, "Member 'AChaosCacheManager::CacheCollection' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, CacheMode) == 0x0002A8, "Member 'AChaosCacheManager::CacheMode' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, StartMode) == 0x0002A9, "Member 'AChaosCacheManager::StartMode' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, StartTime) == 0x0002AC, "Member 'AChaosCacheManager::StartTime' has a wrong offset!");
static_assert(offsetof(AChaosCacheManager, ObservedComponents) == 0x0002B8, "Member 'AChaosCacheManager::ObservedComponents' has a wrong offset!");

// Class ChaosCaching.ChaosCachePlayer
// 0x0000 (0x0348 - 0x0348)
class AChaosCachePlayer final  : public AChaosCacheManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCachePlayer">();
	}
	static class AChaosCachePlayer* GetDefaultObj()
	{
		return GetDefaultObjImpl<AChaosCachePlayer>();
	}
};
static_assert(alignof(AChaosCachePlayer) == 0x000008, "Wrong alignment on AChaosCachePlayer");
static_assert(sizeof(AChaosCachePlayer) == 0x000348, "Wrong size on AChaosCachePlayer");

// Class ChaosCaching.ChaosCache
// 0x0228 (0x0250 - 0x0028)
class UChaosCache final  : public UObject
{
public:
	float                                         RecordedDuration;                                  // 0x0028(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                        NumRecordedFrames;                                 // 0x002C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int32>                                 TrackToParticle;                                   // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPerParticleCacheData>          ParticleTracks;                                    // 0x0040(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurves>         ChannelsTracks;                                    // 0x0050(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FRichCurve>          CurveData;                                         // 0x00A0(0x0050)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FCacheEventTrack>    EventTracks;                                       // 0x00F0(0x0050)(NativeAccessSpecifierPrivate)
	struct FCacheSpawnableTemplate                Spawnable;                                         // 0x0140(0x00D0)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                  AdapterGuid;                                       // 0x0210(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                         Version;                                           // 0x0220(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_25C2[0x2C];                                    // 0x0224(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"ChaosCache">();
	}
	static class UChaosCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChaosCache>();
	}
};
static_assert(alignof(UChaosCache) == 0x000010, "Wrong alignment on UChaosCache");
static_assert(sizeof(UChaosCache) == 0x000250, "Wrong size on UChaosCache");
static_assert(offsetof(UChaosCache, RecordedDuration) == 0x000028, "Member 'UChaosCache::RecordedDuration' has a wrong offset!");
static_assert(offsetof(UChaosCache, NumRecordedFrames) == 0x00002C, "Member 'UChaosCache::NumRecordedFrames' has a wrong offset!");
static_assert(offsetof(UChaosCache, TrackToParticle) == 0x000030, "Member 'UChaosCache::TrackToParticle' has a wrong offset!");
static_assert(offsetof(UChaosCache, ParticleTracks) == 0x000040, "Member 'UChaosCache::ParticleTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, ChannelsTracks) == 0x000050, "Member 'UChaosCache::ChannelsTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, CurveData) == 0x0000A0, "Member 'UChaosCache::CurveData' has a wrong offset!");
static_assert(offsetof(UChaosCache, EventTracks) == 0x0000F0, "Member 'UChaosCache::EventTracks' has a wrong offset!");
static_assert(offsetof(UChaosCache, Spawnable) == 0x000140, "Member 'UChaosCache::Spawnable' has a wrong offset!");
static_assert(offsetof(UChaosCache, AdapterGuid) == 0x000210, "Member 'UChaosCache::AdapterGuid' has a wrong offset!");
static_assert(offsetof(UChaosCache, Version) == 0x000220, "Member 'UChaosCache::Version' has a wrong offset!");

// Class ChaosCaching.MovieSceneChaosCacheSection
// 0x0028 (0x0120 - 0x00F8)
class UMovieSceneChaosCacheSection final  : public UMovieSceneBaseCacheSection
{
public:
	struct FMovieSceneChaosCacheParams            Params;                                            // 0x00F8(0x0028)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneChaosCacheSection">();
	}
	static class UMovieSceneChaosCacheSection* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneChaosCacheSection>();
	}
};
static_assert(alignof(UMovieSceneChaosCacheSection) == 0x000008, "Wrong alignment on UMovieSceneChaosCacheSection");
static_assert(sizeof(UMovieSceneChaosCacheSection) == 0x000120, "Wrong size on UMovieSceneChaosCacheSection");
static_assert(offsetof(UMovieSceneChaosCacheSection, Params) == 0x0000F8, "Member 'UMovieSceneChaosCacheSection::Params' has a wrong offset!");

// Class ChaosCaching.MovieSceneChaosCacheTrack
// 0x0018 (0x00B0 - 0x0098)
class UMovieSceneChaosCacheTrack final  : public UMovieSceneNameableTrack
{
public:
	uint8                                         Pad_25C3[0x8];                                     // 0x0098(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMovieSceneSection*>             AnimationSections;                                 // 0x00A0(0x0010)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"MovieSceneChaosCacheTrack">();
	}
	static class UMovieSceneChaosCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMovieSceneChaosCacheTrack>();
	}
};
static_assert(alignof(UMovieSceneChaosCacheTrack) == 0x000008, "Wrong alignment on UMovieSceneChaosCacheTrack");
static_assert(sizeof(UMovieSceneChaosCacheTrack) == 0x0000B0, "Wrong size on UMovieSceneChaosCacheTrack");
static_assert(offsetof(UMovieSceneChaosCacheTrack, AnimationSections) == 0x0000A0, "Member 'UMovieSceneChaosCacheTrack::AnimationSections' has a wrong offset!");

}

