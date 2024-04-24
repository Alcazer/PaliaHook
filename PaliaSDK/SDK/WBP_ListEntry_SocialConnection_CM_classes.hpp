#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_SocialConnection_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_SocialConnection_CM.WBP_ListEntry_SocialConnection_CM_C
// 0x0068 (0x0408 - 0x03A0)
class UWBP_ListEntry_SocialConnection_CM_C final  : public UCommonUserWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_PlayerCharacterRow_Button_Friend_CM_C* Button_AddFriend_1;                                // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Button_Message_CM_C* Button_Message_1;                                  // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_PartyButton_CM_C* Button_PartyV2_1;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Button_Guild_CM_C* Button_PlayerGuild_1;                              // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Button_SyncServer_CM_C* Button_ServerSync_1;                               // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup;                             // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_CM_C*           WBP_PlayerCharacterRow_CM;                         // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItem_SocialConnection_C*           Connection;                                        // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInspectPlayerCharacter;                          // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMarkFocusUI;                                     // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ListEntry_SocialConnection_CM_CustomNavigationGroup_K2Node_ComponentBoundEvent_1_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_ListEntry_SocialConnection_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature(class UWBP_PlayerCharacterProfileImage_CM_C* CharacterProfileImageWidget);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_WBP_ListEntry_SocialConnection_CM(int32 EntryPoint, TDelegate<void(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt)> K2Node_CreateDelegate_OutputDelegate, class UWBP_PlayerCharacterProfileImage_CM_C* K2Node_ComponentBoundEvent_CharacterProfileImageWidget, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TArray<class UWidget*>& K2Node_MakeArray_Array, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsSelected, class UListItem_SocialConnection_C* K2Node_DynamicCast_AsList_Item_Social_Connection, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bIsExpanded);
	void HandleOnMarkUIFocus(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, class UWidget* WidgetToFocus, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInspectPlayerCharacter__DelegateSignature(class UWBP_ListEntry_SocialConnection_CM_C* Widget, const struct FUniqueNetIdRepl& UserId);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt);
	void UpdateButtonsFromConnection(bool CallFunc_IsValid_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_SocialConnection_CM_C">();
	}
	static class UWBP_ListEntry_SocialConnection_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_SocialConnection_CM_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_SocialConnection_CM_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_SocialConnection_CM_C");
static_assert(sizeof(UWBP_ListEntry_SocialConnection_CM_C) == 0x000408, "Wrong size on UWBP_ListEntry_SocialConnection_CM_C");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, UberGraphFrame) == 0x0003A0, "Member 'UWBP_ListEntry_SocialConnection_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Button_AddFriend_1) == 0x0003A8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Button_AddFriend_1' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Button_Message_1) == 0x0003B0, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Button_Message_1' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Button_PartyV2_1) == 0x0003B8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Button_PartyV2_1' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Button_PlayerGuild_1) == 0x0003C0, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Button_PlayerGuild_1' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Button_ServerSync_1) == 0x0003C8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Button_ServerSync_1' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, CustomNavigationGroup) == 0x0003D0, "Member 'UWBP_ListEntry_SocialConnection_CM_C::CustomNavigationGroup' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, WBP_PlayerCharacterRow_CM) == 0x0003D8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::WBP_PlayerCharacterRow_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, Connection) == 0x0003E0, "Member 'UWBP_ListEntry_SocialConnection_CM_C::Connection' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, OnInspectPlayerCharacter) == 0x0003E8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::OnInspectPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_SocialConnection_CM_C, OnMarkFocusUI) == 0x0003F8, "Member 'UWBP_ListEntry_SocialConnection_CM_C::OnMarkFocusUI' has a wrong offset!");

}

