#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Block_ModalDialogue_PF

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Block_ModalDialogue_PF.WBP_Block_ModalDialogue_PF_C
// 0x0090 (0x05E8 - 0x0558)
class UWBP_Block_ModalDialogue_PF_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                Border_Background;                                 // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                         RichText_Prompt;                                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Popup_01_PF_C*            WBP_Template_Popup_01_PF;                          // 0x0570(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       TargetUserId;                                      // 0x0578(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BlockErrorSent;                                    // 0x05A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ReportConfirmationText;                            // 0x05B8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                 Button_Style_Override;                             // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Parent_Widget;                                     // 0x05D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                Parent_Focused_Widget;                             // 0x05E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void BlockAndClose();
	void BlockErrorSent__DelegateSignature(const struct FUniqueNetIdRepl& UserId, EVAL_SocialBlockError BlockError);
	void BndEvt__WBP_Block_ModalDialogue_PF_WBP_Template_Popup_01_PF_K2Node_ComponentBoundEvent_0_Cancel__DelegateSignature();
	void BndEvt__WBP_Block_ModalDialogue_PF_WBP_Template_Popup_01_PF_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature();
	bool BP_OnHandleBackAction();
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_Block_ModalDialogue_PF(int32 EntryPoint, uint8 CallFunc_MakeLiteralByte_ReturnValue, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_2_0, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_Event_FocusedParentWidget, bool K2Node_Event_NewWidgetCreated, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_AkEventGlobal_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, struct FGuid& K2Node_CustomEvent_AccountId_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_AkEventGlobal_ReturnValue_1, class UWidget* K2Node_Event_ParentWidget, class UWidget* K2Node_Event_ParentFocusedWidget, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_ReportPlayerModalDialog_PF_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class UVAL_FriendsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, EVAL_SocialBlockError CallFunc_RequestBlockUser_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, TScriptInterface<class IBPI_SubWidgetFocusable_C> K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_SubWidgetFocusable_C> K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate_1);
	void InpActEvt_IA_UI_BlockPlayer_OnlyBlock_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void InpActEvt_IA_UI_GenericAccept_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnFailure_4326F87E411B7F4C536D669B13F6CA0A(struct FGuid& AccountId);
	void OnSubWidgetClosed(bool FocusedParentWidget, bool NewWidgetCreated);
	void OnSuccess_4326F87E411B7F4C536D669B13F6CA0A(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void OnWidgetCreated(class UWidget* ParentWidget, class UWidget* ParentFocusedWidget);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Block_ModalDialogue_PF_C">();
	}
	static class UWBP_Block_ModalDialogue_PF_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Block_ModalDialogue_PF_C>();
	}
};
static_assert(alignof(UWBP_Block_ModalDialogue_PF_C) == 0x000008, "Wrong alignment on UWBP_Block_ModalDialogue_PF_C");
static_assert(sizeof(UWBP_Block_ModalDialogue_PF_C) == 0x0005E8, "Wrong size on UWBP_Block_ModalDialogue_PF_C");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, UberGraphFrame) == 0x000558, "Member 'UWBP_Block_ModalDialogue_PF_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, Border_Background) == 0x000560, "Member 'UWBP_Block_ModalDialogue_PF_C::Border_Background' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, RichText_Prompt) == 0x000568, "Member 'UWBP_Block_ModalDialogue_PF_C::RichText_Prompt' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, WBP_Template_Popup_01_PF) == 0x000570, "Member 'UWBP_Block_ModalDialogue_PF_C::WBP_Template_Popup_01_PF' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, TargetUserId) == 0x000578, "Member 'UWBP_Block_ModalDialogue_PF_C::TargetUserId' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, BlockErrorSent) == 0x0005A8, "Member 'UWBP_Block_ModalDialogue_PF_C::BlockErrorSent' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, ReportConfirmationText) == 0x0005B8, "Member 'UWBP_Block_ModalDialogue_PF_C::ReportConfirmationText' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, Button_Style_Override) == 0x0005D0, "Member 'UWBP_Block_ModalDialogue_PF_C::Button_Style_Override' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, Parent_Widget) == 0x0005D8, "Member 'UWBP_Block_ModalDialogue_PF_C::Parent_Widget' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_PF_C, Parent_Focused_Widget) == 0x0005E0, "Member 'UWBP_Block_ModalDialogue_PF_C::Parent_Focused_Widget' has a wrong offset!");

}

