#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_PoolAudio

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct Struct_PoolAudio.Struct_PoolAudio
// 0x0040 (0x0040 - 0x0000)
struct FStruct_PoolAudio final 
{
public:
	class UAkAudioEvent*                          StaticLoop_43_593ABC904795E071C52429A6FB2C1DD4;    // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          OneShot_44_EE196B5A4C06ABFB71B10EA3B89560EE;       // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          RandomLoop_46_9C5FB4C94F915F8427B074B47A587DD1;    // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         RandomLoopChance_47_096153C84A94C48CFD5275989466D5B7; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38A6[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LocationOffset_16_4D01C8FC41960451F3B43C8DC9BBDD1E; // 0x0020(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFoliage_25_7BF2D4084EBABAD634E67A9352A70676;     // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FStruct_PoolAudio) == 0x000008, "Wrong alignment on FStruct_PoolAudio");
static_assert(sizeof(FStruct_PoolAudio) == 0x000040, "Wrong size on FStruct_PoolAudio");
static_assert(offsetof(FStruct_PoolAudio, StaticLoop_43_593ABC904795E071C52429A6FB2C1DD4) == 0x000000, "Member 'FStruct_PoolAudio::StaticLoop_43_593ABC904795E071C52429A6FB2C1DD4' has a wrong offset!");
static_assert(offsetof(FStruct_PoolAudio, OneShot_44_EE196B5A4C06ABFB71B10EA3B89560EE) == 0x000008, "Member 'FStruct_PoolAudio::OneShot_44_EE196B5A4C06ABFB71B10EA3B89560EE' has a wrong offset!");
static_assert(offsetof(FStruct_PoolAudio, RandomLoop_46_9C5FB4C94F915F8427B074B47A587DD1) == 0x000010, "Member 'FStruct_PoolAudio::RandomLoop_46_9C5FB4C94F915F8427B074B47A587DD1' has a wrong offset!");
static_assert(offsetof(FStruct_PoolAudio, RandomLoopChance_47_096153C84A94C48CFD5275989466D5B7) == 0x000018, "Member 'FStruct_PoolAudio::RandomLoopChance_47_096153C84A94C48CFD5275989466D5B7' has a wrong offset!");
static_assert(offsetof(FStruct_PoolAudio, LocationOffset_16_4D01C8FC41960451F3B43C8DC9BBDD1E) == 0x000020, "Member 'FStruct_PoolAudio::LocationOffset_16_4D01C8FC41960451F3B43C8DC9BBDD1E' has a wrong offset!");
static_assert(offsetof(FStruct_PoolAudio, IsFoliage_25_7BF2D4084EBABAD634E67A9352A70676) == 0x000038, "Member 'FStruct_PoolAudio::IsFoliage_25_7BF2D4084EBABAD634E67A9352A70676' has a wrong offset!");

}

