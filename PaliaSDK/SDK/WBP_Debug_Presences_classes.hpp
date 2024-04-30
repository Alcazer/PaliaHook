#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Debug_Presences

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Debug_Presences.WBP_Debug_Presences_C
// 0x0020 (0x02E0 - 0x02C0)
class UWBP_Debug_Presences_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_ListView_Styled*                 ListView;                                          // 0x02C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          WaitingToRefresh;                                  // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_57[0x7];                                       // 0x02D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        RefreshInterval;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void Construct();
	void ExecuteUbergraph_WBP_Debug_Presences(int32 EntryPoint, TDelegate<void(bool bDisplayDebugPresences)> K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetDebugPresenceFlag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
	void HandleOnShowDebugPresences(bool bDisplayDebugPresences, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default);
	void RefreshPresences(const TArray<class UObject*>& Objects, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_GetCachedPresencesUserIdList_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, class UBP_ListObject_DebugPresence_C* CallFunc_SpawnObject_ReturnValue, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Debug_Presences_C">();
	}
	static class UWBP_Debug_Presences_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Debug_Presences_C>();
	}
};
static_assert(alignof(UWBP_Debug_Presences_C) == 0x000008, "Wrong alignment on UWBP_Debug_Presences_C");
static_assert(sizeof(UWBP_Debug_Presences_C) == 0x0002E0, "Wrong size on UWBP_Debug_Presences_C");
static_assert(offsetof(UWBP_Debug_Presences_C, UberGraphFrame) == 0x0002C0, "Member 'UWBP_Debug_Presences_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_Presences_C, ListView) == 0x0002C8, "Member 'UWBP_Debug_Presences_C::ListView' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_Presences_C, WaitingToRefresh) == 0x0002D0, "Member 'UWBP_Debug_Presences_C::WaitingToRefresh' has a wrong offset!");
static_assert(offsetof(UWBP_Debug_Presences_C, RefreshInterval) == 0x0002D8, "Member 'UWBP_Debug_Presences_C::RefreshInterval' has a wrong offset!");

}

