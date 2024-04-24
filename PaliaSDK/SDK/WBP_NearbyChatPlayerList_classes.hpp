#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_NearbyChatPlayerList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_NearbyChatPlayerList.WBP_NearbyChatPlayerList_C
// 0x0010 (0x02D0 - 0x02C0)
class UWBP_NearbyChatPlayerList_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TileView_Styled*                 TileView_Players;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_WBP_NearbyChatPlayerList(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void UpdatePlayers(const TArray<class UBP_NearbyChatEntry_C*>& Players, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UBP_NearbyChatEntry_C* CallFunc_SpawnObject_ReturnValue, class UChatManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, TArray<struct FVAL_ChatProximityEntity>& CallFunc_GetPlayersInChatProximity_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVAL_ChatProximityEntity& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_NearbyChatPlayerList_C">();
	}
	static class UWBP_NearbyChatPlayerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_NearbyChatPlayerList_C>();
	}
};
static_assert(alignof(UWBP_NearbyChatPlayerList_C) == 0x000008, "Wrong alignment on UWBP_NearbyChatPlayerList_C");
static_assert(sizeof(UWBP_NearbyChatPlayerList_C) == 0x0002D0, "Wrong size on UWBP_NearbyChatPlayerList_C");
static_assert(offsetof(UWBP_NearbyChatPlayerList_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_NearbyChatPlayerList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_NearbyChatPlayerList_C, TileView_Players) == 0x0002C8, "Member 'UWBP_NearbyChatPlayerList_C::TileView_Players' has a wrong offset!");

}

