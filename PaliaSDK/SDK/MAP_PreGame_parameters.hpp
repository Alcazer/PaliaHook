#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MAP_PreGame

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function MAP_PreGame.MAP_PreGame_C.GetCharacterInventoryPreviewer
// 0x0008 (0x0008 - 0x0000)
struct MAP_PreGame_C_GetCharacterInventoryPreviewer final 
{
public:
	class AVAL_CharacterPreviewer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetCharacterInventoryPreviewer) == 0x000008, "Wrong alignment on MAP_PreGame_C_GetCharacterInventoryPreviewer");
static_assert(sizeof(MAP_PreGame_C_GetCharacterInventoryPreviewer) == 0x000008, "Wrong size on MAP_PreGame_C_GetCharacterInventoryPreviewer");
static_assert(offsetof(MAP_PreGame_C_GetCharacterInventoryPreviewer, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetCharacterInventoryPreviewer::ReturnValue' has a wrong offset!");

// Function MAP_PreGame.MAP_PreGame_C.GetCharacterPreviewer
// 0x0080 (0x0080 - 0x0000)
struct MAP_PreGame_C_GetCharacterPreviewer final 
{
public:
	class AVAL_CharacterPreviewer*                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42E7[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_MakeTransform_ReturnValue;                // 0x0010(0x0060)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterPreview_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetCharacterPreviewer) == 0x000010, "Wrong alignment on MAP_PreGame_C_GetCharacterPreviewer");
static_assert(sizeof(MAP_PreGame_C_GetCharacterPreviewer) == 0x000080, "Wrong size on MAP_PreGame_C_GetCharacterPreviewer");
static_assert(offsetof(MAP_PreGame_C_GetCharacterPreviewer, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetCharacterPreviewer::ReturnValue' has a wrong offset!");
static_assert(offsetof(MAP_PreGame_C_GetCharacterPreviewer, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'MAP_PreGame_C_GetCharacterPreviewer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(MAP_PreGame_C_GetCharacterPreviewer, CallFunc_MakeTransform_ReturnValue) == 0x000010, "Member 'MAP_PreGame_C_GetCharacterPreviewer::CallFunc_MakeTransform_ReturnValue' has a wrong offset!");
static_assert(offsetof(MAP_PreGame_C_GetCharacterPreviewer, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x000070, "Member 'MAP_PreGame_C_GetCharacterPreviewer::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(MAP_PreGame_C_GetCharacterPreviewer, CallFunc_FinishSpawningActor_ReturnValue) == 0x000078, "Member 'MAP_PreGame_C_GetCharacterPreviewer::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");

// Function MAP_PreGame.MAP_PreGame_C.GetCharacterRenderStudio
// 0x0008 (0x0008 - 0x0000)
struct MAP_PreGame_C_GetCharacterRenderStudio final 
{
public:
	class AVAL_CharacterRenderStudio*             ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetCharacterRenderStudio) == 0x000008, "Wrong alignment on MAP_PreGame_C_GetCharacterRenderStudio");
static_assert(sizeof(MAP_PreGame_C_GetCharacterRenderStudio) == 0x000008, "Wrong size on MAP_PreGame_C_GetCharacterRenderStudio");
static_assert(offsetof(MAP_PreGame_C_GetCharacterRenderStudio, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetCharacterRenderStudio::ReturnValue' has a wrong offset!");

// Function MAP_PreGame.MAP_PreGame_C.GetItemPreviewerSpawnLocation
// 0x0018 (0x0018 - 0x0000)
struct MAP_PreGame_C_GetItemPreviewerSpawnLocation final 
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetItemPreviewerSpawnLocation) == 0x000008, "Wrong alignment on MAP_PreGame_C_GetItemPreviewerSpawnLocation");
static_assert(sizeof(MAP_PreGame_C_GetItemPreviewerSpawnLocation) == 0x000018, "Wrong size on MAP_PreGame_C_GetItemPreviewerSpawnLocation");
static_assert(offsetof(MAP_PreGame_C_GetItemPreviewerSpawnLocation, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetItemPreviewerSpawnLocation::ReturnValue' has a wrong offset!");

// Function MAP_PreGame.MAP_PreGame_C.GetLobbyCharacter
// 0x0008 (0x0008 - 0x0000)
struct MAP_PreGame_C_GetLobbyCharacter final 
{
public:
	class AValeriaCharacter*                      ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetLobbyCharacter) == 0x000008, "Wrong alignment on MAP_PreGame_C_GetLobbyCharacter");
static_assert(sizeof(MAP_PreGame_C_GetLobbyCharacter) == 0x000008, "Wrong size on MAP_PreGame_C_GetLobbyCharacter");
static_assert(offsetof(MAP_PreGame_C_GetLobbyCharacter, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetLobbyCharacter::ReturnValue' has a wrong offset!");

// Function MAP_PreGame.MAP_PreGame_C.GetRenderStudioSpawnLocation
// 0x0018 (0x0018 - 0x0000)
struct MAP_PreGame_C_GetRenderStudioSpawnLocation final 
{
public:
	struct FVector                                ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MAP_PreGame_C_GetRenderStudioSpawnLocation) == 0x000008, "Wrong alignment on MAP_PreGame_C_GetRenderStudioSpawnLocation");
static_assert(sizeof(MAP_PreGame_C_GetRenderStudioSpawnLocation) == 0x000018, "Wrong size on MAP_PreGame_C_GetRenderStudioSpawnLocation");
static_assert(offsetof(MAP_PreGame_C_GetRenderStudioSpawnLocation, ReturnValue) == 0x000000, "Member 'MAP_PreGame_C_GetRenderStudioSpawnLocation::ReturnValue' has a wrong offset!");

}

