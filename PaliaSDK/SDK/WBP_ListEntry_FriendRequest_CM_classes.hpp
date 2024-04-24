#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ListEntry_FriendRequest_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CommonWidgetInputExtended_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ListEntry_FriendRequest_CM.WBP_ListEntry_FriendRequest_CM_C
// 0x00B8 (0x0458 - 0x03A0)
class UWBP_ListEntry_FriendRequest_CM_C final  : public UCommonUserWidgetInputExtended
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03A0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_Border_Styled*                   BackerDefault;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_Border_Styled*                   BackerHighlight;                                   // 0x03B0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BackerSwitcher;                                    // 0x03B8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Close_02_CM_C*     Button_Dismiss;                                    // 0x03C0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_Primary_01_CM_C*   Button_Primary_Accept;                             // 0x03C8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              DefaultAcceptBtn;                                  // 0x03D0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x03D8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_103;                                         // 0x03E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            S6UI_CustomNavigationGroup_Request;                // 0x03E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PlatformPlayerName_C*              WBP_PlatformPlayerName;                            // 0x03F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       User_Id;                                           // 0x03F8(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnAcceptRequest;                                   // 0x0428(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnDismissRequest;                                  // 0x0438(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMarkFocusUI;                                     // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_ListEntry_CommunityRequest_CM_S6UI_CustomNavigationGroup_Request_K2Node_ComponentBoundEvent_4_OnCustomNavigationGroupInitialized__DelegateSignature(class US6UI_CustomNavigationGroup* NavGroup);
	void BndEvt__WBP_ListEntry_FriendRequest_CM_Button_Primary_Accept_K2Node_ComponentBoundEvent_0_ButtonClicked__DelegateSignature();
	void BndEvt__WBP_ListEntry_FriendRequest_CM_Button_Primary_Accept_K2Node_ComponentBoundEvent_1_ButtonHovered__DelegateSignature();
	void BndEvt__WBP_ListEntry_FriendRequest_CM_DefaultAcceptBtn_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_ListEntry_FriendRequest_CM_WBP_Template_Button_CM_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnEntryReleased();
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void ExecuteUbergraph_WBP_ListEntry_FriendRequest_CM(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, class FText CallFunc_Conv_StringToText_ReturnValue, bool K2Node_Event_bIsExpanded, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_Event_bIsSelected, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UObject* K2Node_Event_ListItemObject, class FText CallFunc_Format_ReturnValue, class UBP_ListObject_FriendRequest_C* K2Node_DynamicCast_AsBP_List_Object_Friend_Request, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_PostGlobalEvent_ReturnValue, int32 CallFunc_PostGlobalEvent_ReturnValue_1, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class US6UI_CustomNavigationGroup* K2Node_ComponentBoundEvent_NavGroup, TArray<class UWidget*>& K2Node_MakeArray_Array_1);
	void HandleEnhancedInputAction(class UInputAction* IA, bool* IsHandled, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnAcceptRequest__DelegateSignature(const struct FUniqueNetIdRepl& UserId);
	void OnDismissRequest__DelegateSignature(const struct FUniqueNetIdRepl& UserId);
	void OnFailure_00A446FA4961842D968AEDB1A1539EA3(struct FGuid& AccountId);
	void OnFocusLost(const struct FFocusEvent& InFocusEvent);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_1, const struct FF_CommonUIButtonPrompt& K2Node_MakeStruct_F_CommonUIButtonPrompt_2, TArray<struct FF_CommonUIButtonPrompt>& K2Node_MakeArray_Array, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt);
	void OnSuccess_00A446FA4961842D968AEDB1A1539EA3(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ListEntry_FriendRequest_CM_C">();
	}
	static class UWBP_ListEntry_FriendRequest_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ListEntry_FriendRequest_CM_C>();
	}
};
static_assert(alignof(UWBP_ListEntry_FriendRequest_CM_C) == 0x000008, "Wrong alignment on UWBP_ListEntry_FriendRequest_CM_C");
static_assert(sizeof(UWBP_ListEntry_FriendRequest_CM_C) == 0x000458, "Wrong size on UWBP_ListEntry_FriendRequest_CM_C");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, UberGraphFrame) == 0x0003A0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, BackerDefault) == 0x0003A8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::BackerDefault' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, BackerHighlight) == 0x0003B0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::BackerHighlight' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, BackerSwitcher) == 0x0003B8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::BackerSwitcher' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, Button_Dismiss) == 0x0003C0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::Button_Dismiss' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, Button_Primary_Accept) == 0x0003C8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::Button_Primary_Accept' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, DefaultAcceptBtn) == 0x0003D0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::DefaultAcceptBtn' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, Image) == 0x0003D8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, Image_103) == 0x0003E0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::Image_103' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, S6UI_CustomNavigationGroup_Request) == 0x0003E8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::S6UI_CustomNavigationGroup_Request' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, WBP_PlatformPlayerName) == 0x0003F0, "Member 'UWBP_ListEntry_FriendRequest_CM_C::WBP_PlatformPlayerName' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, User_Id) == 0x0003F8, "Member 'UWBP_ListEntry_FriendRequest_CM_C::User_Id' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, OnAcceptRequest) == 0x000428, "Member 'UWBP_ListEntry_FriendRequest_CM_C::OnAcceptRequest' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, OnDismissRequest) == 0x000438, "Member 'UWBP_ListEntry_FriendRequest_CM_C::OnDismissRequest' has a wrong offset!");
static_assert(offsetof(UWBP_ListEntry_FriendRequest_CM_C, OnMarkFocusUI) == 0x000448, "Member 'UWBP_ListEntry_FriendRequest_CM_C::OnMarkFocusUI' has a wrong offset!");

}

