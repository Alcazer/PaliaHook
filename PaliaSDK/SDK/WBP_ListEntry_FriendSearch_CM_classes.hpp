#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_FriendSearch_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_FriendSearch_CM.WBP_ListEntry_FriendSearch_CM_C
// 0x0060 (0x03B8 - 0x0358)
class UWBP_ListEntry_FriendSearch_CM_C final  : public UCommonUserWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0358(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   Border_Highlight;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup_FriendSearch;                // 0x0368(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_Button_Friend_CM_C* WBP_PlayerCharacterRow_Button_Friend_CM;           // 0x0370(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlayerCharacterRow_CM_C*           WBP_PlayerCharacterRow_CM;                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UListItem_SocialConnection_C*           Connection;                                        // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnInspectPlayerCharacter;                          // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnAddFriendClicked;                                // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMarkFocusUI;                                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ListEntry_FriendSearch_CM_CustomNavigationGroup_FriendSearch_K2Node_ComponentBoundEvent_5_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_ListEntry_FriendSearch_CM_CustomNavigationGroup_FriendSearch_K2Node_ComponentBoundEvent_6_OnNavigated__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_ListEntry_FriendSearch_CM_WBP_PlayerCharacterRow_Button_Friend_CM_K2Node_ComponentBoundEvent_1_OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& Uiprompt);
	void BndEvt__WBP_ListEntry_FriendSearch_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_0_OnCharacterProfileImageClicked__DelegateSignature(class UWBP_PlayerCharacterProfileImage_CM_C* CharacterProfileImageWidget);
	void BndEvt__WBP_ListEntry_FriendSearch_CM_WBP_PlayerCharacterRow_CM_K2Node_ComponentBoundEvent_2_OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& Uiprompt);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void Construct();
	void ExecuteUbergraph_WBP_ListEntry_FriendSearch_CM(int32 EntryPoint, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UListItem_SocialConnection_C* K2Node_DynamicCast_AsList_Item_Social_Connection, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent, class UWBP_PlayerCharacterProfileImage_CM_C* K2Node_ComponentBoundEvent_CharacterProfileImageWidget, class UWidget* K2Node_ComponentBoundEvent_Widget_1, TArray<struct FF_CommonUIButtonPrompt>& K2Node_ComponentBoundEvent_uiprompt_1, class UWidget* K2Node_ComponentBoundEvent_Widget, TArray<struct FF_CommonUIButtonPrompt>& K2Node_ComponentBoundEvent_uiprompt, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup_1, TArray<class UWidget*>& K2Node_MakeArray_Array);
	void OnAddFriendClicked__DelegateSignature(class UWBP_ListEntry_FriendSearch_CM_C* Widget, const struct FUniqueNetIdRepl& UserId);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnInspectPlayerCharacter__DelegateSignature(class UWBP_ListEntry_FriendSearch_CM_C* Widget, const struct FUniqueNetIdRepl& UserId);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& Uiprompt);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_FriendSearch_CM_C">();
	}
	static class UWBP_ListEntry_FriendSearch_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_FriendSearch_CM_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_FriendSearch_CM_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_FriendSearch_CM_C");
static_assert(sizeof(UWBP_ListEntry_FriendSearch_CM_C) == 0x0003B8, "Wrong size on UWBP_ListEntry_FriendSearch_CM_C");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, UberGraphFrame) == 0x000358, "Member 'UWBP_ListEntry_FriendSearch_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, Border_Highlight) == 0x000360, "Member 'UWBP_ListEntry_FriendSearch_CM_C::Border_Highlight' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, CustomNavigationGroup_FriendSearch) == 0x000368, "Member 'UWBP_ListEntry_FriendSearch_CM_C::CustomNavigationGroup_FriendSearch' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, WBP_PlayerCharacterRow_Button_Friend_CM) == 0x000370, "Member 'UWBP_ListEntry_FriendSearch_CM_C::WBP_PlayerCharacterRow_Button_Friend_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, WBP_PlayerCharacterRow_CM) == 0x000378, "Member 'UWBP_ListEntry_FriendSearch_CM_C::WBP_PlayerCharacterRow_CM' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, Connection) == 0x000380, "Member 'UWBP_ListEntry_FriendSearch_CM_C::Connection' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, OnInspectPlayerCharacter) == 0x000388, "Member 'UWBP_ListEntry_FriendSearch_CM_C::OnInspectPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, OnAddFriendClicked) == 0x000398, "Member 'UWBP_ListEntry_FriendSearch_CM_C::OnAddFriendClicked' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendSearch_CM_C, OnMarkFocusUI) == 0x0003A8, "Member 'UWBP_ListEntry_FriendSearch_CM_C::OnMarkFocusUI' has a wrong offset!");

}

