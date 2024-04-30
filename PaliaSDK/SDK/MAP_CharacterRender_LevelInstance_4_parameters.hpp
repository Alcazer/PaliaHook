#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MAP_CharacterRender_LevelInstance_4

#include "Basic.hpp"

#include "Palia_structs.hpp"


namespace SDK::Params
{

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.ExecuteUbergraph_MAP_CharacterRender
// 0x0004 (0x0004 - 0x0000)
struct MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender final 
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender) == 0x000004, "Wrong alignment on MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender");
static_assert(sizeof(MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender) == 0x000004, "Wrong size on MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender");
static_assert(offsetof(MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender, EntryPoint) == 0x000000, "Member 'MAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender::EntryPoint' has a wrong offset!");

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllCameraActors
// 0x0050 (0x0050 - 0x0000)
struct MAP_CharacterRender_C_GetAllCameraActors final 
{
public:
	TSet<class AActor*>                           ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(MAP_CharacterRender_C_GetAllCameraActors) == 0x000008, "Wrong alignment on MAP_CharacterRender_C_GetAllCameraActors");
static_assert(sizeof(MAP_CharacterRender_C_GetAllCameraActors) == 0x000050, "Wrong size on MAP_CharacterRender_C_GetAllCameraActors");
static_assert(offsetof(MAP_CharacterRender_C_GetAllCameraActors, ReturnValue) == 0x000000, "Member 'MAP_CharacterRender_C_GetAllCameraActors::ReturnValue' has a wrong offset!");

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllTaggedActors
// 0x0050 (0x0050 - 0x0000)
struct MAP_CharacterRender_C_GetAllTaggedActors final 
{
public:
	TSet<class AActor*>                           ReturnValue;                                       // 0x0000(0x0050)(Parm, OutParm, ReturnParm)
};
static_assert(alignof(MAP_CharacterRender_C_GetAllTaggedActors) == 0x000008, "Wrong alignment on MAP_CharacterRender_C_GetAllTaggedActors");
static_assert(sizeof(MAP_CharacterRender_C_GetAllTaggedActors) == 0x000050, "Wrong size on MAP_CharacterRender_C_GetAllTaggedActors");
static_assert(offsetof(MAP_CharacterRender_C_GetAllTaggedActors, ReturnValue) == 0x000000, "Member 'MAP_CharacterRender_C_GetAllTaggedActors::ReturnValue' has a wrong offset!");

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCameraActorForCosmeticAsset
// 0x0018 (0x0018 - 0x0000)
struct MAP_CharacterRender_C_GetCameraActorForCosmeticAsset final 
{
public:
	class UVAL_CharacterCustomizationItemBase*    Item;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EVAL_CharacterBodyType                        BodyType;                                          // 0x0008(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4E08[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 ReturnValue;                                       // 0x0010(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_CharacterRender_C_GetCameraActorForCosmeticAsset) == 0x000008, "Wrong alignment on MAP_CharacterRender_C_GetCameraActorForCosmeticAsset");
static_assert(sizeof(MAP_CharacterRender_C_GetCameraActorForCosmeticAsset) == 0x000018, "Wrong size on MAP_CharacterRender_C_GetCameraActorForCosmeticAsset");
static_assert(offsetof(MAP_CharacterRender_C_GetCameraActorForCosmeticAsset, Item) == 0x000000, "Member 'MAP_CharacterRender_C_GetCameraActorForCosmeticAsset::Item' has a wrong offset!");
static_assert(offsetof(MAP_CharacterRender_C_GetCameraActorForCosmeticAsset, BodyType) == 0x000008, "Member 'MAP_CharacterRender_C_GetCameraActorForCosmeticAsset::BodyType' has a wrong offset!");
static_assert(offsetof(MAP_CharacterRender_C_GetCameraActorForCosmeticAsset, ReturnValue) == 0x000010, "Member 'MAP_CharacterRender_C_GetCameraActorForCosmeticAsset::ReturnValue' has a wrong offset!");

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCharacter
// 0x0008 (0x0008 - 0x0000)
struct MAP_CharacterRender_C_GetCharacter final 
{
public:
	class AValeriaCharacter*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_CharacterRender_C_GetCharacter) == 0x000008, "Wrong alignment on MAP_CharacterRender_C_GetCharacter");
static_assert(sizeof(MAP_CharacterRender_C_GetCharacter) == 0x000008, "Wrong size on MAP_CharacterRender_C_GetCharacter");
static_assert(offsetof(MAP_CharacterRender_C_GetCharacter, ReturnValue) == 0x000000, "Member 'MAP_CharacterRender_C_GetCharacter::ReturnValue' has a wrong offset!");

// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetDefaultCameraActor
// 0x0008 (0x0008 - 0x0000)
struct MAP_CharacterRender_C_GetDefaultCameraActor final 
{
public:
	class AActor*                                 ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_CharacterRender_C_GetDefaultCameraActor) == 0x000008, "Wrong alignment on MAP_CharacterRender_C_GetDefaultCameraActor");
static_assert(sizeof(MAP_CharacterRender_C_GetDefaultCameraActor) == 0x000008, "Wrong size on MAP_CharacterRender_C_GetDefaultCameraActor");
static_assert(offsetof(MAP_CharacterRender_C_GetDefaultCameraActor, ReturnValue) == 0x000000, "Member 'MAP_CharacterRender_C_GetDefaultCameraActor::ReturnValue' has a wrong offset!");

}

