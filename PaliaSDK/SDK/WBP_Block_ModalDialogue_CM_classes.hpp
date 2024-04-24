#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Block_ModalDialogue_CM

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ValeriaUI_classes.hpp"
#include "Palia_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_Block_ModalDialogue_CM.WBP_Block_ModalDialogue_CM_C
// 0x0070 (0x05C8 - 0x0558)
class UWBP_Block_ModalDialogue_CM_C final  : public UVALUI_ModalWidgetBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_TextBlock_Styled*                TextBlock_ReportPrompt;                            // 0x0560(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Template_Popup_01_CM_C*            WBP_Template_Popup_01_CM;                          // 0x0568(0x0008)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUniqueNetIdRepl                       TargetUserId;                                      // 0x0570(0x0030)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             BlockErrorSent;                                    // 0x05A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   ReportConfirmationText;                            // 0x05B0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void BlockAndClose();
	void BlockErrorSent__DelegateSignature(const struct FUniqueNetIdRepl& UserId, EVAL_SocialBlockError BlockError);
	void BndEvt__WBP_Block_ModalDialogue_CM_WBP_Template_Popup_01_CM_K2Node_ComponentBoundEvent_0_Cancel__DelegateSignature();
	void BndEvt__WBP_Block_ModalDialogue_CM_WBP_Template_Popup_01_CM_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature();
	bool BP_OnHandleBackAction();
	void Close();
	void Construct();
	void ExecuteUbergraph_WBP_Block_ModalDialogue_CM(int32 EntryPoint, class UVAL_FriendsManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UInputAction* Temp_object_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_ReportPlayerModalDialog_CM_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, EVAL_SocialBlockError CallFunc_RequestBlockUser_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, bool K2Node_Event_IsDesignTime, uint8 CallFunc_MakeLiteralByte_ReturnValue, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, int32 CallFunc_AkEventGlobal_ReturnValue_1, class FText CallFunc_Format_ReturnValue_1);
	void InpActEvt_IA_UI_BlockPlayer_OnlyBlock_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
	void OnFailure_CD421E814C47399A77F4C3A8521197B5(struct FGuid& AccountId);
	void OnSuccess_CD421E814C47399A77F4C3A8521197B5(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names);
	void PreConstruct(bool IsDesignTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_Block_ModalDialogue_CM_C">();
	}
	static class UWBP_Block_ModalDialogue_CM_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_Block_ModalDialogue_CM_C>();
	}
};
static_assert(alignof(UWBP_Block_ModalDialogue_CM_C) == 0x000008, "Wrong alignment on UWBP_Block_ModalDialogue_CM_C");
static_assert(sizeof(UWBP_Block_ModalDialogue_CM_C) == 0x0005C8, "Wrong size on UWBP_Block_ModalDialogue_CM_C");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, UberGraphFrame) == 0x000558, "Member 'UWBP_Block_ModalDialogue_CM_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, TextBlock_ReportPrompt) == 0x000560, "Member 'UWBP_Block_ModalDialogue_CM_C::TextBlock_ReportPrompt' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, WBP_Template_Popup_01_CM) == 0x000568, "Member 'UWBP_Block_ModalDialogue_CM_C::WBP_Template_Popup_01_CM' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, TargetUserId) == 0x000570, "Member 'UWBP_Block_ModalDialogue_CM_C::TargetUserId' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, BlockErrorSent) == 0x0005A0, "Member 'UWBP_Block_ModalDialogue_CM_C::BlockErrorSent' has a wrong offset!");
static_assert(offsetof(UWBP_Block_ModalDialogue_CM_C, ReportConfirmationText) == 0x0005B0, "Member 'UWBP_Block_ModalDialogue_CM_C::ReportConfirmationText' has a wrong offset!");

}

