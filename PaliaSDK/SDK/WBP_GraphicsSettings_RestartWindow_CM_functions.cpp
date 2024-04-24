#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_GraphicsSettings_RestartWindow_CM

#include "Basic.hpp"

#include "WBP_GraphicsSettings_RestartWindow_CM_classes.hpp"
#include "WBP_GraphicsSettings_RestartWindow_CM_parameters.hpp"


namespace SDK
{

// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.BndEvt__WBP_GraphicsSettings_UnappliedChangesWindow_CM_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature
// (BlueprintEvent)

void UWBP_GraphicsSettings_RestartWindow_CM_C::BndEvt__WBP_GraphicsSettings_UnappliedChangesWindow_CM_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "BndEvt__WBP_GraphicsSettings_UnappliedChangesWindow_CM_WBP_Template_PopupSecondary_02_CM_K2Node_ComponentBoundEvent_1_Confirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.CanClose
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ES6UI_ModalWidgetState                  CallFunc_GetModalWidgetState_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_GraphicsSettings_RestartWindow_CM_C::CanClose(ES6UI_ModalWidgetState CallFunc_GetModalWidgetState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "CanClose");

	Params::WBP_GraphicsSettings_RestartWindow_CM_C_CanClose Parms{};

	Parms.CallFunc_GetModalWidgetState_ReturnValue = CallFunc_GetModalWidgetState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GraphicsSettings_RestartWindow_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetFirstRunSetupNeedRestart_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsSettings_RestartWindow_CM_C::ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM(int32 EntryPoint, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetFirstRunSetupNeedRestart_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM");

	Params::WBP_GraphicsSettings_RestartWindow_CM_C_ExecuteUbergraph_WBP_GraphicsSettings_RestartWindow_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFirstRunSetupNeedRestart_ReturnValue = CallFunc_GetFirstRunSetupNeedRestart_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.HandleStartClosing_BP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bPermitLatentClosing                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOutHasLatentClosingLogic                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsSettings_RestartWindow_CM_C::HandleStartClosing_BP(bool bPermitLatentClosing, bool* bOutHasLatentClosingLogic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "HandleStartClosing_BP");

	Params::WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartClosing_BP Parms{};

	Parms.bPermitLatentClosing = bPermitLatentClosing;

	UObject::ProcessEvent(Func, &Parms);

	if (bOutHasLatentClosingLogic != nullptr)
		*bOutHasLatentClosingLogic = Parms.bOutHasLatentClosingLogic;
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.HandleStartOpening_BP
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bOutHasLatentOpeningLogic                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GraphicsSettings_RestartWindow_CM_C::HandleStartOpening_BP(bool* bOutHasLatentOpeningLogic)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "HandleStartOpening_BP");

	Params::WBP_GraphicsSettings_RestartWindow_CM_C_HandleStartOpening_BP Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutHasLatentOpeningLogic != nullptr)
		*bOutHasLatentOpeningLogic = Parms.bOutHasLatentOpeningLogic;
}


// Function WBP_GraphicsSettings_RestartWindow_CM.WBP_GraphicsSettings_RestartWindow_CM_C.OnConfirm__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_GraphicsSettings_RestartWindow_CM_C::OnConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GraphicsSettings_RestartWindow_CM_C", "OnConfirm__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

