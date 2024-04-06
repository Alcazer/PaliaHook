#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_DebugPresence

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_DebugPresence.WBP_ListEntry_DebugPresence_C
// 0x0040 (0x02B8 - 0x0278)
class UWBP_ListEntry_DebugPresence_C final  : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                TextBlock_CharacterName;                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_MapName;                                 // 0x0288(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_Status;                                  // 0x0290(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                           OnlineStatusColor;                                 // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OfflineStatusColor;                                // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_ListEntry_DebugPresence(int32 EntryPoint, EVAL_PresenceStatus Temp_byte_Variable, struct FGuid& K2Node_CustomEvent_AccountId_1, struct FGuid& K2Node_CustomEvent_CharacterId_1, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, struct FGuid& K2Node_CustomEvent_CharacterId, struct FOSSVAL_CharacterNameAndId& K2Node_CustomEvent_Name, TDelegate<void(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)> K2Node_CreateDelegate_OutputDelegate_1, const struct FOSSVAL_CharacterNameAndId& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FGuid& Temp_struct_Variable_2, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_ListObject_DebugPresence_C* K2Node_DynamicCast_AsBP_List_Object_Debug_Presence, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* CallFunc_GetCharacterNameByAccountIdAndCharacterId_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	void OnFailure_C7D73FBC4F468EBB895B5EABB9D5F126(struct FGuid& AccountId, struct FGuid& CharacterId);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnSuccess_C7D73FBC4F468EBB895B5EABB9D5F126(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Param_Name);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_DebugPresence_C">();
	}
	static class UWBP_ListEntry_DebugPresence_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_DebugPresence_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_DebugPresence_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_DebugPresence_C");
static_assert(sizeof(UWBP_ListEntry_DebugPresence_C) == 0x0002B8, "Wrong size on UWBP_ListEntry_DebugPresence_C");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, UberGraphFrame) == 0x000278, "Member 'UWBP_ListEntry_DebugPresence_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, TextBlock_CharacterName) == 0x000280, "Member 'UWBP_ListEntry_DebugPresence_C::TextBlock_CharacterName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, TextBlock_MapName) == 0x000288, "Member 'UWBP_ListEntry_DebugPresence_C::TextBlock_MapName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, TextBlock_Status) == 0x000290, "Member 'UWBP_ListEntry_DebugPresence_C::TextBlock_Status' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, OnlineStatusColor) == 0x000298, "Member 'UWBP_ListEntry_DebugPresence_C::OnlineStatusColor' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_DebugPresence_C, OfflineStatusColor) == 0x0002A8, "Member 'UWBP_ListEntry_DebugPresence_C::OfflineStatusColor' has a wrong offset!");

}

