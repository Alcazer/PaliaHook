#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ReportPlayerModalDialog_PF

#include "Basic.hpp"

#include "WBP_ReportPlayerModalDialog_PF_classes.hpp"
#include "WBP_ReportPlayerModalDialog_PF_parameters.hpp"


namespace SDK
{

// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.BP_OnHandleBackAction
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_UIFocusable_C>CallFunc_HandleAccept_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_ReportPlayerModalDialog_PF_C::BP_OnHandleBackAction(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IBPI_UIFocusable_C> CallFunc_HandleAccept_self_CastInput, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "BP_OnHandleBackAction");

	Params::WBP_ReportPlayerModalDialog_PF_C_BP_OnHandleBackAction Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_HandleAccept_self_CastInput = CallFunc_HandleAccept_self_CastInput;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue = CallFunc_Get_Menu_Anchor_Is_Open_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ReportPlayerModalDialog_PF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ReportPlayerModalDialog_PF_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.ExecuteUbergraph_WBP_ReportPlayerModalDialog_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId_1                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(struct FGuid& AccountId)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            K2Node_CustomEvent_AccountId                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>K2Node_CustomEvent_Names                               (ConstParm, ReferenceParm)
// TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Temp_struct_Variable                                   (ReferenceParm)
// struct FGuid                            Temp_struct_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue            (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_StringToText_ReturnValue                 ()
// class FText                             CallFunc_Conv_StringToText_ReturnValue_1               ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array_1                               (ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FText                             CallFunc_Format_ReturnValue_1                          ()
// class UInputAction*                     Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_0                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_FocusedParentWidget                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_NewWidgetCreated                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ES6PLAT_PlayerBehaviorReportType        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS6PLAT_PlayerBehaviorReportForm CallFunc_MakeReportFormFromCurrentState_S6PLAT_PlayerBehaviorReportForm()
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_ErrorDisplayPayload       K2Node_MakeStruct_VALUI_ErrorDisplayPayload            ()
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVALUI_ErrorDisplayPayload       K2Node_Event_ErrorDisplayPayload                       (ConstParm)
// struct FGuid                            CallFunc_GetAccountId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOSSVAL_GetCharacterNamesByAccountIdProxy*CallFunc_GetCharacterNamesByAccountId_ReturnValue      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default_1                                ()
// TArray<struct FS6PLAT_PlayerBehaviorReportCategoryInfo>CallFunc_Map_Values_Values                             (ReferenceParm)
// struct FS6PLAT_PlayerBehaviorReportCategoryInfoCallFunc_Array_Get_Item                                ()
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Add_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6PLAT_PlayerBehaviorSubsystem*  CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_Event_IsDesignTime                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_Event_ParentWidget                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_Event_ParentFocusedWidget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SubWidgetFocusable_C>K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6PLAT_PlayerBehaviorSubsystem*  CallFunc_GetLocalPlayerSubsystem_ReturnValue_1         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo>CallFunc_GetValidReportCategoriesByType_ReturnValue    ()
// class US6PLAT_PlayerBehaviorSubsystem*  CallFunc_GetLocalPlayerSubsystem_ReturnValue_2         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ValidateReportForm_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TryRaiseErrorForDisplay_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::ExecuteUbergraph_WBP_ReportPlayerModalDialog_PF(int32 EntryPoint, struct FGuid& K2Node_CustomEvent_AccountId_1, TDelegate<void(struct FGuid& AccountId)> K2Node_CreateDelegate_OutputDelegate, struct FGuid& K2Node_CustomEvent_AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& K2Node_CustomEvent_Names, TDelegate<void(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)> K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FOSSVAL_CharacterNameAndId>& Temp_struct_Variable, const struct FGuid& Temp_struct_Variable_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class UInputAction* Temp_object_Variable, double Temp_real_Variable, double Temp_real_Variable_0, double Temp_real_Variable_1, bool Temp_bool_Variable, double Temp_real_Variable_1_0, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_FocusedParentWidget, bool K2Node_Event_NewWidgetCreated, ES6PLAT_PlayerBehaviorReportType Temp_byte_Variable, const struct FS6PLAT_PlayerBehaviorReportForm& CallFunc_MakeReportFormFromCurrentState_S6PLAT_PlayerBehaviorReportForm, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, ESlateVisibility Temp_byte_Variable_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, ESlateVisibility Temp_byte_Variable_2, const struct FVALUI_ErrorDisplayPayload& K2Node_MakeStruct_VALUI_ErrorDisplayPayload, bool Temp_bool_Variable_1, struct FVALUI_ErrorDisplayPayload& K2Node_Event_ErrorDisplayPayload, const struct FGuid& CallFunc_GetAccountId_ReturnValue, class UOSSVAL_GetCharacterNamesByAccountIdProxy* CallFunc_GetCharacterNamesByAccountId_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default_1, TArray<struct FS6PLAT_PlayerBehaviorReportCategoryInfo>& CallFunc_Map_Values_Values, const struct FS6PLAT_PlayerBehaviorReportCategoryInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_Event_ParentWidget, class UWidget* K2Node_Event_ParentFocusedWidget, TScriptInterface<class IBPI_SubWidgetFocusable_C> K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, const TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo>& CallFunc_GetValidReportCategoriesByType_ReturnValue, class US6PLAT_PlayerBehaviorSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_ValidateReportForm_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_TryRaiseErrorForDisplay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "ExecuteUbergraph_WBP_ReportPlayerModalDialog_PF");

	Params::WBP_ReportPlayerModalDialog_PF_C_ExecuteUbergraph_WBP_ReportPlayerModalDialog_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_AccountId_1 = std::move(K2Node_CustomEvent_AccountId_1);
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_AccountId = std::move(K2Node_CustomEvent_AccountId);
	Parms.K2Node_CustomEvent_Names = std::move(K2Node_CustomEvent_Names);
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.Temp_struct_Variable_1 = std::move(Temp_struct_Variable_1);
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = std::move(K2Node_EnhancedInputActionEvent_ActionValue);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.K2Node_MakeArray_Array_1 = std::move(K2Node_MakeArray_Array_1);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_0 = Temp_real_Variable_0;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_real_Variable_1_0 = Temp_real_Variable_1_0;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_FocusedParentWidget = K2Node_Event_FocusedParentWidget;
	Parms.K2Node_Event_NewWidgetCreated = K2Node_Event_NewWidgetCreated;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeReportFormFromCurrentState_S6PLAT_PlayerBehaviorReportForm = std::move(CallFunc_MakeReportFormFromCurrentState_S6PLAT_PlayerBehaviorReportForm);
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_MakeStruct_VALUI_ErrorDisplayPayload = std::move(K2Node_MakeStruct_VALUI_ErrorDisplayPayload);
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_ErrorDisplayPayload = std::move(K2Node_Event_ErrorDisplayPayload);
	Parms.CallFunc_GetAccountId_ReturnValue = std::move(CallFunc_GetAccountId_ReturnValue);
	Parms.CallFunc_GetCharacterNamesByAccountId_ReturnValue = CallFunc_GetCharacterNamesByAccountId_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Map_Values_Values = std::move(CallFunc_Map_Values_Values);
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_ParentWidget = K2Node_Event_ParentWidget;
	Parms.K2Node_Event_ParentFocusedWidget = K2Node_Event_ParentFocusedWidget;
	Parms.K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable = K2Node_DynamicCast_AsBPI_Sub_Widget_Focusable;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_GetValidReportCategoriesByType_ReturnValue = std::move(CallFunc_GetValidReportCategoriesByType_ReturnValue);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_2 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_ValidateReportForm_ReturnValue = CallFunc_ValidateReportForm_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TryRaiseErrorForDisplay_ReturnValue = CallFunc_TryRaiseErrorForDisplay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	Temp_struct_Variable = std::move(Parms.Temp_struct_Variable);
	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
	K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);
	CallFunc_Map_Values_Values = std::move(Parms.CallFunc_Map_Values_Values);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.HandleErrorDisplay
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ErrorDisplayPayload       ErrorDisplayPayload                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ReportPlayerModalDialog_PF_C::HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "HandleErrorDisplay");

	Params::WBP_ReportPlayerModalDialog_PF_C_HandleErrorDisplay Parms{};

	Parms.ErrorDisplayPayload = std::move(ErrorDisplayPayload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.InpActEvt_IA_UI_ReportPlayer_SubmitReport_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::InpActEvt_IA_UI_ReportPlayer_SubmitReport_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "InpActEvt_IA_UI_ReportPlayer_SubmitReport_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_ReportPlayerModalDialog_PF_C_InpActEvt_IA_UI_ReportPlayer_SubmitReport_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.MakeReportFormFromCurrentState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS6PLAT_PlayerBehaviorReportForm S6PLAT_PlayerBehaviorReportForm                        (Parm, OutParm)
// class FName                             CategorySystemName                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_True_if_break_was_hit_Variable               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<EChatMessageType>                  K2Node_MakeSet_Set                                     ()
// struct FVALUI_ChatMessageFetchFilter    K2Node_MakeStruct_VALUI_ChatMessageFetchFilter         ()
// class FText                             CallFunc_GetCurrentSelectedItem_Selected_Text          ()
// TArray<struct FValeriaChatMessage>      CallFunc_FetchChatMessages_ReturnValue                 (ReferenceParm)
// TArray<struct FS6PLAT_ChatMessage>      CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue(ReferenceParm)
// class FText                             CallFunc_GetText_ReturnValue                           ()
// class FString                           CallFunc_Conv_TextToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class UAuthManager*                     CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS6PLAT_ChatMessage              CallFunc_ConvertValeriaChatMessageToPlatformChatMessage_ReturnValue()
// struct FGuid                            CallFunc_GetCharacterId_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_GetAccountId_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CallFunc_Map_Keys_Keys                                 (ReferenceParm)
// class FName                             CallFunc_Array_Get_Item                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                            CallFunc_GetAccountId_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS6PLAT_PlayerBehaviorReportForm K2Node_MakeStruct_S6PLAT_PlayerBehaviorReportForm      ()
// struct FS6PLAT_PlayerBehaviorReportCategoryInfoCallFunc_Map_Find_Value                                ()
// bool                                    CallFunc_Map_Find_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_TextText_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::MakeReportFormFromCurrentState(struct FS6PLAT_PlayerBehaviorReportForm* S6PLAT_PlayerBehaviorReportForm, class FName CategorySystemName, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const TSet<EChatMessageType>& K2Node_MakeSet_Set, const struct FVALUI_ChatMessageFetchFilter& K2Node_MakeStruct_VALUI_ChatMessageFetchFilter, class FText CallFunc_GetCurrentSelectedItem_Selected_Text, TArray<struct FValeriaChatMessage>& CallFunc_FetchChatMessages_ReturnValue, TArray<struct FS6PLAT_ChatMessage>& CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UAuthManager* CallFunc_GetLocalPlayerSubsystem_ReturnValue, const struct FS6PLAT_ChatMessage& CallFunc_ConvertValeriaChatMessageToPlatformChatMessage_ReturnValue, const struct FGuid& CallFunc_GetCharacterId_ReturnValue, const struct FGuid& CallFunc_GetAccountId_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, const struct FGuid& CallFunc_GetAccountId_ReturnValue_1, const struct FS6PLAT_PlayerBehaviorReportForm& K2Node_MakeStruct_S6PLAT_PlayerBehaviorReportForm, const struct FS6PLAT_PlayerBehaviorReportCategoryInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "MakeReportFormFromCurrentState");

	Params::WBP_ReportPlayerModalDialog_PF_C_MakeReportFormFromCurrentState Parms{};

	Parms.CategorySystemName = CategorySystemName;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeSet_Set = std::move(K2Node_MakeSet_Set);
	Parms.K2Node_MakeStruct_VALUI_ChatMessageFetchFilter = std::move(K2Node_MakeStruct_VALUI_ChatMessageFetchFilter);
	Parms.CallFunc_GetCurrentSelectedItem_Selected_Text = CallFunc_GetCurrentSelectedItem_Selected_Text;
	Parms.CallFunc_FetchChatMessages_ReturnValue = std::move(CallFunc_FetchChatMessages_ReturnValue);
	Parms.CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue = std::move(CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue);
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = std::move(CallFunc_Conv_TextToString_ReturnValue);
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_ConvertValeriaChatMessageToPlatformChatMessage_ReturnValue = std::move(CallFunc_ConvertValeriaChatMessageToPlatformChatMessage_ReturnValue);
	Parms.CallFunc_GetCharacterId_ReturnValue = std::move(CallFunc_GetCharacterId_ReturnValue);
	Parms.CallFunc_GetAccountId_ReturnValue = std::move(CallFunc_GetAccountId_ReturnValue);
	Parms.CallFunc_Map_Keys_Keys = std::move(CallFunc_Map_Keys_Keys);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAccountId_ReturnValue_1 = std::move(CallFunc_GetAccountId_ReturnValue_1);
	Parms.K2Node_MakeStruct_S6PLAT_PlayerBehaviorReportForm = std::move(K2Node_MakeStruct_S6PLAT_PlayerBehaviorReportForm);
	Parms.CallFunc_Map_Find_Value = std::move(CallFunc_Map_Find_Value);
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_FetchChatMessages_ReturnValue = std::move(Parms.CallFunc_FetchChatMessages_ReturnValue);
	CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue = std::move(Parms.CallFunc_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_ReturnValue);
	CallFunc_Map_Keys_Keys = std::move(Parms.CallFunc_Map_Keys_Keys);

	if (S6PLAT_PlayerBehaviorReportForm != nullptr)
		*S6PLAT_PlayerBehaviorReportForm = std::move(Parms.S6PLAT_PlayerBehaviorReportForm);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.OnFailure_FB70231344DAA3295EECB59C1318C450
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::OnFailure_FB70231344DAA3295EECB59C1318C450(struct FGuid& AccountId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "OnFailure_FB70231344DAA3295EECB59C1318C450");

	Params::WBP_ReportPlayerModalDialog_PF_C_OnFailure_FB70231344DAA3295EECB59C1318C450 Parms{};

	Parms.AccountId = std::move(AccountId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.OnSubWidgetClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    FocusedParentWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    NewWidgetCreated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::OnSubWidgetClosed(bool FocusedParentWidget, bool NewWidgetCreated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "OnSubWidgetClosed");

	Params::WBP_ReportPlayerModalDialog_PF_C_OnSubWidgetClosed Parms{};

	Parms.FocusedParentWidget = FocusedParentWidget;
	Parms.NewWidgetCreated = NewWidgetCreated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.OnSuccess_FB70231344DAA3295EECB59C1318C450
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            AccountId                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FOSSVAL_CharacterNameAndId>Names                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ReportPlayerModalDialog_PF_C::OnSuccess_FB70231344DAA3295EECB59C1318C450(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "OnSuccess_FB70231344DAA3295EECB59C1318C450");

	Params::WBP_ReportPlayerModalDialog_PF_C_OnSuccess_FB70231344DAA3295EECB59C1318C450 Parms{};

	Parms.AccountId = std::move(AccountId);
	Parms.Names = std::move(Names);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.OnWidgetCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          ParentWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          ParentFocusedWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::OnWidgetCreated(class UWidget* ParentWidget, class UWidget* ParentFocusedWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "OnWidgetCreated");

	Params::WBP_ReportPlayerModalDialog_PF_C_OnWidgetCreated Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.ParentFocusedWidget = ParentFocusedWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ReportPlayerModalDialog_PF_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "PreConstruct");

	Params::WBP_ReportPlayerModalDialog_PF_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ReportPlayerModalDialog_PF.WBP_ReportPlayerModalDialog_PF_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ReportPlayerModalDialog_PF_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ReportPlayerModalDialog_PF_C", "BP_GetDesiredFocusTarget");

	Params::WBP_ReportPlayerModalDialog_PF_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

