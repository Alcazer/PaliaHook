#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TileItem_SavedLoadout

#include "Basic.hpp"

#include "Palia_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass TileItem_SavedLoadout.TileItem_SavedLoadout_C
// 0x0948 (0x0970 - 0x0028)
class UTileItem_SavedLoadout_C final  : public UObject
{
public:
	class UWBP_SavedLoadoutsPanel_C*              Owning_Panel;                                      // 0x0028(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVAL_CharacterCustomizationLoadout     Loadout;                                           // 0x0030(0x0900)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGuid                                  LoadoutId;                                         // 0x0930(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                   LoadoutName;                                       // 0x0940(0x0018)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bDraggable;                                        // 0x0958(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5A56[0x7];                                     // 0x0959(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             RequestSavedLoadoutDelete;                         // 0x0960(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void DeleteSavedLoadout();
	void RequestSavedLoadoutDelete__DelegateSignature(const struct FGuid& Param_LoadoutId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TileItem_SavedLoadout_C">();
	}
	static class UTileItem_SavedLoadout_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTileItem_SavedLoadout_C>();
	}
};
static_assert(alignof(UTileItem_SavedLoadout_C) == 0x000008, "Wrong alignment on UTileItem_SavedLoadout_C");
static_assert(sizeof(UTileItem_SavedLoadout_C) == 0x000970, "Wrong size on UTileItem_SavedLoadout_C");
static_assert(offsetof(UTileItem_SavedLoadout_C, Owning_Panel) == 0x000028, "Member 'UTileItem_SavedLoadout_C::Owning_Panel' has a wrong offset!");
static_assert(offsetof(UTileItem_SavedLoadout_C, Loadout) == 0x000030, "Member 'UTileItem_SavedLoadout_C::Loadout' has a wrong offset!");
static_assert(offsetof(UTileItem_SavedLoadout_C, LoadoutId) == 0x000930, "Member 'UTileItem_SavedLoadout_C::LoadoutId' has a wrong offset!");
static_assert(offsetof(UTileItem_SavedLoadout_C, LoadoutName) == 0x000940, "Member 'UTileItem_SavedLoadout_C::LoadoutName' has a wrong offset!");
static_assert(offsetof(UTileItem_SavedLoadout_C, bDraggable) == 0x000958, "Member 'UTileItem_SavedLoadout_C::bDraggable' has a wrong offset!");
static_assert(offsetof(UTileItem_SavedLoadout_C, RequestSavedLoadoutDelete) == 0x000960, "Member 'UTileItem_SavedLoadout_C::RequestSavedLoadoutDelete' has a wrong offset!");

}

