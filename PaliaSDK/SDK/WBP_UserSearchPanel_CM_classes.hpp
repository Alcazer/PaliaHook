#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_UserSearchPanel_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_UserSearchConfig_structs.hpp"
#include "CommonUI_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_UserSearchPanel_CM.WBP_UserSearchPanel_CM_C
// 0x0110 (0x0520 - 0x0410)
class UWBP_UserSearchPanel_CM_C final  : public UCommonActivatableWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0410(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ShowError;                                         // 0x0418(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               Box_NoSearchTerm;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_PendingSearch;                                 // 0x0428(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_SearchFailure;                                 // 0x0430(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Box_SearchResults;                                 // 0x0438(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_BackFromSearch;                             // 0x0440(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class US6UI_CustomNavigationGroup*            CustomNavigationGroup_UserSearch;                  // 0x0448(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_EditableText_Styled*             EBox_Input;                                        // 0x0450(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                ErrorTextBlock;                                    // 0x0458(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_95;                                          // 0x0460(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_NoSearchTermContent;                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NamedSlot_SearchResultsContent;                    // 0x0470(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             NameSlot_TopHeader;                                // 0x0478(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switcher_SearchResults;                            // 0x0480(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_CompletedSearchText;                     // 0x0488(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                TextBlock_PendingSearchText;                       // 0x0490(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_ScrollBox_Styled*                VALUI_ScrollBox_Styled_42;                         // 0x0498(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AnimatedLoading_C*                 WBP_AnimatedLoading;                               // 0x04A0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Notification_Basic_Error_C* WBP_Template_Notification_Basic_Error;             // 0x04A8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSearchResultsRetrieved;                          // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBackButtonClicked;                               // 0x04C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FBP_UserSearchConfig                   SearchConfig;                                      // 0x04D0(0x0004)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_53F6[0x4];                                     // 0x04D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSearchBoxCommitted;                              // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   SearchBoxText;                                     // 0x04E8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnSearchGroupSwitched;                             // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnMarkFocusUI;                                     // 0x0510(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void BndEvt__WBP_UserSearchPanel_CM_Button_BackFromSearch_1_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_UserSearchPanel_CM_Button_BackFromSearch_1_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_UserSearchPanel_CM_EBox_Input_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(class FText& Text);
	void BndEvt__WBP_UserSearchPanel_VALUI_EditableText_Styled_56_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, ETextCommit CommitMethod);
	void CheckAllowedToSearch(const class FString& SearchString, bool* bAllowed, class FText* ErrorText, class FText ErrorMsg, bool IsAllowed, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const class FString& CallFunc_GetCharacterName_ReturnValue, class UVAL_FriendsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UVAL_FriendsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const TSet<struct FUniqueNetIdRepl>& CallFunc_TryGetOutgoingFriendRequests_OutFriendRequests, bool CallFunc_TryGetOutgoingFriendRequests_ReturnValue, class FText CallFunc_Format_ReturnValue, TArray<struct FUniqueNetIdRepl>& CallFunc_Set_ToArray_Result, const struct FUniqueNetIdRepl& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class UVAL_PlayerGuildSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsLocalPlayerInPlayerGuildWith_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_HasFriendWithCharacterName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_4, const struct FPresence& CallFunc_GetPresenceForUserId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1);
	void ExecuteUbergraph_WBP_UserSearchPanel_CM(int32 EntryPoint, TDelegate<void(bool bWasSuccessful, const class FString& OriginalSearchTerm, struct FUniqueNetIdRepl& OutUserId, struct FVALDTOS_MetaCharacterFormat& OutCharacterInfo)> K2Node_CreateDelegate_OutputDelegate, class FText K2Node_ComponentBoundEvent_Text_1, ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText K2Node_ComponentBoundEvent_Text, bool CallFunc_IsConsole_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Format_ReturnValue, bool CallFunc_CheckAllowedToSearch_bAllowed, class FText CallFunc_CheckAllowedToSearch_ErrorText, bool CallFunc_TextIsEmpty_ReturnValue, class UPresenceManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_TrySearchForCharacter_ReturnValue);
	void GotoNoSearchPanel();
	void HandleSearchForCharacterResult(bool bWasSuccessful, const class FString& OriginalSearchTerm, struct FUniqueNetIdRepl& UserId, struct FVALDTOS_MetaCharacterFormat& CharacterInfo, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_StringToText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
	void OnBackButtonClicked__DelegateSignature(class UWBP_UserSearchPanel_CM_C* UserSearchPanel);
	void OnMarkFocusUI__DelegateSignature(class UWidget* Widget, TArray<struct FF_CommonUIButtonPrompt>& UIPrompt);
	void OnSearchBoxCommitted__DelegateSignature();
	void OnSearchGroupSwitched__DelegateSignature(int32 GroupIndex);
	void OnSearchResultsRetrieved__DelegateSignature(bool bWasSuccessful, const class FString& OriginalSearchTerm, struct FUniqueNetIdRepl& UserId, struct FVALDTOS_MetaCharacterFormat& CharacterInfo);
	void Reset(class FText CallFunc_GetEmptyText_ReturnValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_UserSearchPanel_CM_C">();
	}
	static class UWBP_UserSearchPanel_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_UserSearchPanel_CM_C>();
	}
};
static_assert(alignof(UWBP_UserSearchPanel_CM_C) == 0x000008, "Wrong alignment on UWBP_UserSearchPanel_CM_C");
static_assert(sizeof(UWBP_UserSearchPanel_CM_C) == 0x000520, "Wrong size on UWBP_UserSearchPanel_CM_C");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, UberGraphFrame) == 0x000410, "Member 'UWBP_UserSearchPanel_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, ShowError) == 0x000418, "Member 'UWBP_UserSearchPanel_CM_C::ShowError' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Box_NoSearchTerm) == 0x000420, "Member 'UWBP_UserSearchPanel_CM_C::Box_NoSearchTerm' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Box_PendingSearch) == 0x000428, "Member 'UWBP_UserSearchPanel_CM_C::Box_PendingSearch' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Box_SearchFailure) == 0x000430, "Member 'UWBP_UserSearchPanel_CM_C::Box_SearchFailure' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Box_SearchResults) == 0x000438, "Member 'UWBP_UserSearchPanel_CM_C::Box_SearchResults' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Button_BackFromSearch) == 0x000440, "Member 'UWBP_UserSearchPanel_CM_C::Button_BackFromSearch' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, CustomNavigationGroup_UserSearch) == 0x000448, "Member 'UWBP_UserSearchPanel_CM_C::CustomNavigationGroup_UserSearch' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, EBox_Input) == 0x000450, "Member 'UWBP_UserSearchPanel_CM_C::EBox_Input' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, ErrorTextBlock) == 0x000458, "Member 'UWBP_UserSearchPanel_CM_C::ErrorTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Image_95) == 0x000460, "Member 'UWBP_UserSearchPanel_CM_C::Image_95' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, NamedSlot_NoSearchTermContent) == 0x000468, "Member 'UWBP_UserSearchPanel_CM_C::NamedSlot_NoSearchTermContent' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, NamedSlot_SearchResultsContent) == 0x000470, "Member 'UWBP_UserSearchPanel_CM_C::NamedSlot_SearchResultsContent' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, NameSlot_TopHeader) == 0x000478, "Member 'UWBP_UserSearchPanel_CM_C::NameSlot_TopHeader' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, Switcher_SearchResults) == 0x000480, "Member 'UWBP_UserSearchPanel_CM_C::Switcher_SearchResults' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, TextBlock_CompletedSearchText) == 0x000488, "Member 'UWBP_UserSearchPanel_CM_C::TextBlock_CompletedSearchText' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, TextBlock_PendingSearchText) == 0x000490, "Member 'UWBP_UserSearchPanel_CM_C::TextBlock_PendingSearchText' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, VALUI_ScrollBox_Styled_42) == 0x000498, "Member 'UWBP_UserSearchPanel_CM_C::VALUI_ScrollBox_Styled_42' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, WBP_AnimatedLoading) == 0x0004A0, "Member 'UWBP_UserSearchPanel_CM_C::WBP_AnimatedLoading' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, WBP_Template_Notification_Basic_Error) == 0x0004A8, "Member 'UWBP_UserSearchPanel_CM_C::WBP_Template_Notification_Basic_Error' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, OnSearchResultsRetrieved) == 0x0004B0, "Member 'UWBP_UserSearchPanel_CM_C::OnSearchResultsRetrieved' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, OnBackButtonClicked) == 0x0004C0, "Member 'UWBP_UserSearchPanel_CM_C::OnBackButtonClicked' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, SearchConfig) == 0x0004D0, "Member 'UWBP_UserSearchPanel_CM_C::SearchConfig' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, OnSearchBoxCommitted) == 0x0004D8, "Member 'UWBP_UserSearchPanel_CM_C::OnSearchBoxCommitted' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, SearchBoxText) == 0x0004E8, "Member 'UWBP_UserSearchPanel_CM_C::SearchBoxText' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, OnSearchGroupSwitched) == 0x000500, "Member 'UWBP_UserSearchPanel_CM_C::OnSearchGroupSwitched' has a wrong offset!");
static_assert(offsetof(UWBP_UserSearchPanel_CM_C, OnMarkFocusUI) == 0x000510, "Member 'UWBP_UserSearchPanel_CM_C::OnMarkFocusUI' has a wrong offset!");

}

