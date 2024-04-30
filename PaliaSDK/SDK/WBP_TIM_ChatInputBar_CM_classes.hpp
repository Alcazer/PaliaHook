#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_TIM_ChatInputBar_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "Palia_structs.hpp"
#include "S6UICore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_TIM_ChatInputBar_CM.WBP_TIM_ChatInputBar_CM_C
// 0x00C0 (0x0580 - 0x04C0)
class UWBP_TIM_ChatInputBar_CM_C final  : public UVALUI_ChatInputBar
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DisplayHint;                                       // 0x04C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisplayCharacterLimit;                             // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DisplaySuggestions;                                // 0x04D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_Template_Button_CM_C*              Button_Emoji;                                      // 0x04E0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                CharacterLimitText;                                // 0x04E8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TIM_ChatCmdHint_C*                 CommandHint;                                       // 0x04F0(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ErrorNotificationsVBox;                            // 0x04F8(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                HeaderTextBlock;                                   // 0x0500(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TIM_ChatInputBarButtonPrompt_PF_C* Image_Emoji;                                       // 0x0508(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                Text_Delimiter;                                    // 0x0510(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVALUI_TextBlock_Styled*                VALUI_TextBlock_Styled_265;                        // 0x0518(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TIM_ChatCmdSuggestions_CM_C*       WBP_TIM_ChatCmdSuggestions_CM;                     // 0x0520(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_TIM_EmojiPanel_CM_C*               WBP_TIM_EmojiPanel_CM;                             // 0x0528(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          SuggestionsDisplayed;                              // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EVALUI_ChatInputBarState                      InputBarState;                                     // 0x0531(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisplayingCharacterLimit;                          // 0x0532(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54DC[0x1];                                     // 0x0533(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CharacterLimitThreshold;                           // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisplayingCommandHint;                             // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54DD[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CaretLineIndex;                                    // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CaretOffset;                                       // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54DE[0x4];                                     // 0x0544(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FS6UI_ContextMenu                      InputBarContextMenu;                               // 0x0548(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_             OnChatInputBarFocus;                               // 0x0568(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          ClearHintText;                                     // 0x0578(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ApplyParentalControls(bool CallFunc_IsInParentalControl_ReturnValue);
	void BndEvt__WBP_TIM_ChatInputBar_CM_Button_Emoji_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_TIM_ChatInputBar_CM_WBP_TIM_EmojiPanel_CM_K2Node_ComponentBoundEvent_3_OnVisibilityChangedEvent__DelegateSignature(ESlateVisibility InVisibility);
	void BndEvt__WBP_TIM_ChatInputBar_EditableText_K2Node_ComponentBoundEvent_1_VALUI_OnSummonContextMenu__DelegateSignature(struct FGeometry& Geometry, struct FPointerEvent& MouseEvent);
	void CompleteSuggestion();
	void Construct();
	void CycleToNextSuggestion();
	void CycleToPrevSuggestion();
	void Destruct();
	void DisplayActiveCommandHint(class UVAL_ChatCommand_Base* Command, bool bDisplay);
	void DisplayChatChannel(const struct FVALUI_ChatChannel& Channel, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool Temp_bool_Variable_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable_2, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, EMessageTargetType Temp_byte_Variable, bool K2Node_Select_Default);
	void DisplayCommandSuggestions(bool bInDisplay);
	void DisplayStringsSuggestions(const class FString& InString, TArray<class FString>& Suggestions);
	void ExecuteUbergraph_WBP_TIM_ChatInputBar_CM(int32 EntryPoint, class UUserWidget* CallFunc_GetContextMenuContentWidget_ReturnValue, class UWBP_TIM_ChatInputBarContextMenu_CM_C* K2Node_DynamicCast_AsWBP_TIM_Chat_Input_Bar_Context_Menu_CM, bool K2Node_DynamicCast_bSuccess, TDelegate<void(class FText& Text)> K2Node_CreateDelegate_OutputDelegate, EVALUI_ChatInputBarState K2Node_Event_NewStateId, class UVAL_ChatCommand_Base* K2Node_Event_Command, bool K2Node_Event_bDisplay, class FText K2Node_Event_InErrorText, TDelegate<void(class FText ErrorText)> K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_Event_InString, TArray<class FString>& K2Node_Event_Suggestions, bool K2Node_Event_bInDisplay, class FText CallFunc_GetText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TDelegate<void(const class FString& InString, TArray<class UVAL_ChatCommand_Base*>& CommandObjects)> K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsEmpty_IsEmpty, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TSubclassOf<class UUserWidget> Temp_class_Variable, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_3, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, TDelegate<void(class FText& Text)> K2Node_CreateDelegate_OutputDelegate_4, int32 CallFunc_MaximumCharacterLimit_ReturnValue, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, bool K2Node_Event_IsDesignTime, struct FGeometry& K2Node_ComponentBoundEvent_Geometry, struct FPointerEvent& K2Node_ComponentBoundEvent_MouseEvent, struct FVALUI_ChatChannel& K2Node_Event_Channel, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate_5, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class FText CallFunc_GetCompletitionTextPart_CompletitionText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_ComponentBoundEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsConsole_ReturnValue, bool CallFunc_IsConsole_ReturnValue_1, bool CallFunc_IsConsole_ReturnValue_2, bool CallFunc_IsConsole_ReturnValue_3, bool CallFunc_IsConsole_ReturnValue_4, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_3, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue_4, bool CallFunc_IsConsole_ReturnValue_5, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_TIM_ChatErrorNotification_CM_C* CallFunc_Create_ReturnValue, bool CallFunc_SummonContextMenu_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue);
	void HandleCommandSuggestionsChanged(const class FString& InString, TArray<class UVAL_ChatCommand_Base*>& CommandClasses);
	void HandleDisplayCommandHint(class UVAL_ChatCommand_Base* Command, bool Display, class FText HintText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void HandleEditableTextChanged(class FText& Text);
	void HandleOnChatChannelSet(struct FVALUI_ChatChannel& Channel);
	void HandleOnContextMenuButtonPressed();
	void HandleOnStateChanged(EVALUI_ChatInputBarState NewStateId);
	void HandleRequestDisplayChatError(class FText ErrorText);
	void HandleRequestInsertText(class FText& Text, bool CallFunc_IsDesktop_ReturnValue);
	void LoadOrUnloadEmoji(EVALUI_ChatInputBarState NewStateId, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void OnChatInputBarFocus__DelegateSignature();
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, bool Temp_bool_Variable, bool CallFunc_IsVisible_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, class UWidget* K2Node_Select_Default);
	void OpenEmojiMenu(bool CallFunc_IsInParentalControl_ReturnValue, bool CallFunc_IsVisible_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void PushErrorNotification(class FText& InErrorText);
	void Set_Input_Bar_Console_UI(bool Param_Index, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, const struct FVector2D& K2Node_Select_Default);
	void SetTextStyleOverrides(class UVALUI_TextBlockStyle* HeaderOverride, class UVALUI_EditableRichTextStyle* InputOverride);
	void UpdateCharacterLimit(bool IsOverLimit, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText CallFunc_GetPlainText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UChatManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_MaximumCharacterLimit_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateHintTextVisibility(bool Param_IsVisible);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_TIM_ChatInputBar_CM_C">();
	}
	static class UWBP_TIM_ChatInputBar_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_TIM_ChatInputBar_CM_C>();
	}
};
static_assert(alignof(UWBP_TIM_ChatInputBar_CM_C) == 0x000008, "Wrong alignment on UWBP_TIM_ChatInputBar_CM_C");
static_assert(sizeof(UWBP_TIM_ChatInputBar_CM_C) == 0x000580, "Wrong size on UWBP_TIM_ChatInputBar_CM_C");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, UberGraphFrame) == 0x0004C0, "Member 'UWBP_TIM_ChatInputBar_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, DisplayHint) == 0x0004C8, "Member 'UWBP_TIM_ChatInputBar_CM_C::DisplayHint' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, DisplayCharacterLimit) == 0x0004D0, "Member 'UWBP_TIM_ChatInputBar_CM_C::DisplayCharacterLimit' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, DisplaySuggestions) == 0x0004D8, "Member 'UWBP_TIM_ChatInputBar_CM_C::DisplaySuggestions' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, Button_Emoji) == 0x0004E0, "Member 'UWBP_TIM_ChatInputBar_CM_C::Button_Emoji' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, CharacterLimitText) == 0x0004E8, "Member 'UWBP_TIM_ChatInputBar_CM_C::CharacterLimitText' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, CommandHint) == 0x0004F0, "Member 'UWBP_TIM_ChatInputBar_CM_C::CommandHint' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, ErrorNotificationsVBox) == 0x0004F8, "Member 'UWBP_TIM_ChatInputBar_CM_C::ErrorNotificationsVBox' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, HeaderTextBlock) == 0x000500, "Member 'UWBP_TIM_ChatInputBar_CM_C::HeaderTextBlock' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, Image_Emoji) == 0x000508, "Member 'UWBP_TIM_ChatInputBar_CM_C::Image_Emoji' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, Text_Delimiter) == 0x000510, "Member 'UWBP_TIM_ChatInputBar_CM_C::Text_Delimiter' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, VALUI_TextBlock_Styled_265) == 0x000518, "Member 'UWBP_TIM_ChatInputBar_CM_C::VALUI_TextBlock_Styled_265' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, WBP_TIM_ChatCmdSuggestions_CM) == 0x000520, "Member 'UWBP_TIM_ChatInputBar_CM_C::WBP_TIM_ChatCmdSuggestions_CM' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, WBP_TIM_EmojiPanel_CM) == 0x000528, "Member 'UWBP_TIM_ChatInputBar_CM_C::WBP_TIM_EmojiPanel_CM' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, SuggestionsDisplayed) == 0x000530, "Member 'UWBP_TIM_ChatInputBar_CM_C::SuggestionsDisplayed' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, InputBarState) == 0x000531, "Member 'UWBP_TIM_ChatInputBar_CM_C::InputBarState' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, DisplayingCharacterLimit) == 0x000532, "Member 'UWBP_TIM_ChatInputBar_CM_C::DisplayingCharacterLimit' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, CharacterLimitThreshold) == 0x000534, "Member 'UWBP_TIM_ChatInputBar_CM_C::CharacterLimitThreshold' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, DisplayingCommandHint) == 0x000538, "Member 'UWBP_TIM_ChatInputBar_CM_C::DisplayingCommandHint' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, CaretLineIndex) == 0x00053C, "Member 'UWBP_TIM_ChatInputBar_CM_C::CaretLineIndex' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, CaretOffset) == 0x000540, "Member 'UWBP_TIM_ChatInputBar_CM_C::CaretOffset' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, InputBarContextMenu) == 0x000548, "Member 'UWBP_TIM_ChatInputBar_CM_C::InputBarContextMenu' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, OnChatInputBarFocus) == 0x000568, "Member 'UWBP_TIM_ChatInputBar_CM_C::OnChatInputBarFocus' has a wrong offset!");
static_assert(offsetof(UWBP_TIM_ChatInputBar_CM_C, ClearHintText) == 0x000578, "Member 'UWBP_TIM_ChatInputBar_CM_C::ClearHintText' has a wrong offset!");

}

