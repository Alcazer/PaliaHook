#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_Cooking_Minigames_PF

#include "Basic.hpp"

#include "WBP_Cooking_Minigames_PF_classes.hpp"
#include "WBP_Cooking_Minigames_PF_parameters.hpp"


namespace SDK
{

// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.CloseMiniGames
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccess                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::CloseMiniGames(bool WasSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "CloseMiniGames");

	Params::WBP_Cooking_Minigames_PF_C_CloseMiniGames Parms{};

	Parms.WasSuccess = WasSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Cooking_Minigames_PF_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.ExecuteUbergraph_WBP_Cooking_Minigames_PF
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue_5          (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime_5          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime_5        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction_5         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue_4          (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime_4          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime_4        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction_4         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue_1     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue_3          (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime_3        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction_3         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue_2     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_0                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue_2          (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime_2        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction_2         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue_3     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue_1          (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction_1         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FInputActionValue                K2Node_EnhancedInputActionEvent_ActionValue            (NoDestructor)
// float                                   K2Node_EnhancedInputActionEvent_ElapsedTime            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_EnhancedInputActionEvent_TriggeredTime          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     K2Node_EnhancedInputActionEvent_SourceAction           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue_4     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Conv_InputActionValueToBool_ReturnValue_5     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     Temp_object_Variable_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_2_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_2_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_2_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_3_0                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_3_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_3_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimationForward_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsAnimationPlaying_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MinigameQTE_Base_C*          K2Node_DynamicCast_AsWBP_Minigame_QTE_Base             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*                CallFunc_GetOwningPlayer_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_WasSuccess                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 K2Node_Select_Default                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_CreatePlayAnimationProxyObject_Result         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameUserSettings*         CallFunc_GetValeriaGameUserSettings_ReturnValue        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetShowCookingCamera_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::ExecuteUbergraph_WBP_Cooking_Minigames_PF(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_5, float K2Node_EnhancedInputActionEvent_ElapsedTime_5, float K2Node_EnhancedInputActionEvent_TriggeredTime_5, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_5, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_4, float K2Node_EnhancedInputActionEvent_ElapsedTime_4, float K2Node_EnhancedInputActionEvent_TriggeredTime_4, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_3, float K2Node_EnhancedInputActionEvent_ElapsedTime_3, float K2Node_EnhancedInputActionEvent_TriggeredTime_3, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_3, class UInputAction* Temp_object_Variable, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_2, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_0, double Temp_real_Variable_1_0, double Temp_real_Variable_1_1, double Temp_real_Variable_1_2, double Temp_real_Variable_1_3, double Temp_real_Variable_2, bool Temp_bool_Variable, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_2, float K2Node_EnhancedInputActionEvent_ElapsedTime_2, float K2Node_EnhancedInputActionEvent_TriggeredTime_2, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_2, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_3, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue_1, float K2Node_EnhancedInputActionEvent_ElapsedTime_1, float K2Node_EnhancedInputActionEvent_TriggeredTime_1, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction_1, const struct FInputActionValue& K2Node_EnhancedInputActionEvent_ActionValue, float K2Node_EnhancedInputActionEvent_ElapsedTime, float K2Node_EnhancedInputActionEvent_TriggeredTime, class UInputAction* K2Node_EnhancedInputActionEvent_SourceAction, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_4, bool CallFunc_Conv_InputActionValueToBool_ReturnValue_5, class UInputAction* Temp_object_Variable_1, double Temp_real_Variable_2_3, double Temp_real_Variable_2_0, double Temp_real_Variable_2_1, double Temp_real_Variable_2_2, double Temp_real_Variable_3, bool Temp_bool_Variable_1, double Temp_real_Variable_3_0, double Temp_real_Variable_3_1, double Temp_real_Variable_3_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_MinigameQTE_Base_C* K2Node_DynamicCast_AsWBP_Minigame_QTE_Base, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, bool K2Node_CustomEvent_WasSuccess, bool Temp_bool_Variable_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UWidgetAnimation* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_2, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_2, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_3, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, class UValeriaGameUserSettings* CallFunc_GetValeriaGameUserSettings_ReturnValue, bool CallFunc_GetShowCookingCamera_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "ExecuteUbergraph_WBP_Cooking_Minigames_PF");

	Params::WBP_Cooking_Minigames_PF_C_ExecuteUbergraph_WBP_Cooking_Minigames_PF Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_5 = std::move(K2Node_EnhancedInputActionEvent_ActionValue_5);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_5 = K2Node_EnhancedInputActionEvent_ElapsedTime_5;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_5 = K2Node_EnhancedInputActionEvent_TriggeredTime_5;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_5 = K2Node_EnhancedInputActionEvent_SourceAction_5;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_4 = std::move(K2Node_EnhancedInputActionEvent_ActionValue_4);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_4 = K2Node_EnhancedInputActionEvent_ElapsedTime_4;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_4 = K2Node_EnhancedInputActionEvent_TriggeredTime_4;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_4 = K2Node_EnhancedInputActionEvent_SourceAction_4;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue = CallFunc_Conv_InputActionValueToBool_ReturnValue;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_1 = CallFunc_Conv_InputActionValueToBool_ReturnValue_1;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_3 = std::move(K2Node_EnhancedInputActionEvent_ActionValue_3);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_3 = K2Node_EnhancedInputActionEvent_ElapsedTime_3;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_3 = K2Node_EnhancedInputActionEvent_TriggeredTime_3;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_3 = K2Node_EnhancedInputActionEvent_SourceAction_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_2 = CallFunc_Conv_InputActionValueToBool_ReturnValue_2;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_0 = Temp_real_Variable_0;
	Parms.Temp_real_Variable_1_0 = Temp_real_Variable_1_0;
	Parms.Temp_real_Variable_1_1 = Temp_real_Variable_1_1;
	Parms.Temp_real_Variable_1_2 = Temp_real_Variable_1_2;
	Parms.Temp_real_Variable_1_3 = Temp_real_Variable_1_3;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_2 = std::move(K2Node_EnhancedInputActionEvent_ActionValue_2);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_2 = K2Node_EnhancedInputActionEvent_ElapsedTime_2;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_2 = K2Node_EnhancedInputActionEvent_TriggeredTime_2;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_2 = K2Node_EnhancedInputActionEvent_SourceAction_2;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_3 = CallFunc_Conv_InputActionValueToBool_ReturnValue_3;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue_1 = std::move(K2Node_EnhancedInputActionEvent_ActionValue_1);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime_1 = K2Node_EnhancedInputActionEvent_ElapsedTime_1;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime_1 = K2Node_EnhancedInputActionEvent_TriggeredTime_1;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction_1 = K2Node_EnhancedInputActionEvent_SourceAction_1;
	Parms.K2Node_EnhancedInputActionEvent_ActionValue = std::move(K2Node_EnhancedInputActionEvent_ActionValue);
	Parms.K2Node_EnhancedInputActionEvent_ElapsedTime = K2Node_EnhancedInputActionEvent_ElapsedTime;
	Parms.K2Node_EnhancedInputActionEvent_TriggeredTime = K2Node_EnhancedInputActionEvent_TriggeredTime;
	Parms.K2Node_EnhancedInputActionEvent_SourceAction = K2Node_EnhancedInputActionEvent_SourceAction;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_4 = CallFunc_Conv_InputActionValueToBool_ReturnValue_4;
	Parms.CallFunc_Conv_InputActionValueToBool_ReturnValue_5 = CallFunc_Conv_InputActionValueToBool_ReturnValue_5;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_real_Variable_2_3 = Temp_real_Variable_2_3;
	Parms.Temp_real_Variable_2_0 = Temp_real_Variable_2_0;
	Parms.Temp_real_Variable_2_1 = Temp_real_Variable_2_1;
	Parms.Temp_real_Variable_2_2 = Temp_real_Variable_2_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_real_Variable_3_0 = Temp_real_Variable_3_0;
	Parms.Temp_real_Variable_3_1 = Temp_real_Variable_3_1;
	Parms.Temp_real_Variable_3_2 = Temp_real_Variable_3_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Minigame_QTE_Base = K2Node_DynamicCast_AsWBP_Minigame_QTE_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.K2Node_CustomEvent_WasSuccess = K2Node_CustomEvent_WasSuccess;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_GetValeriaCharacter_OutResult_1 = CallFunc_GetValeriaCharacter_OutResult_1;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_1 = CallFunc_GetValeriaCharacter_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValeriaCharacter_OutResult_2 = CallFunc_GetValeriaCharacter_OutResult_2;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_2 = CallFunc_GetValeriaCharacter_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetValeriaCharacter_OutResult_3 = CallFunc_GetValeriaCharacter_OutResult_3;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_3 = CallFunc_GetValeriaCharacter_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetValeriaGameUserSettings_ReturnValue = CallFunc_GetValeriaGameUserSettings_ReturnValue;
	Parms.CallFunc_GetShowCookingCamera_ReturnValue = CallFunc_GetShowCookingCamera_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.Finished_3AC3E5E349E3777A535242BC8C8F2978
// (BlueprintCallable, BlueprintEvent)

void UWBP_Cooking_Minigames_PF_C::Finished_3AC3E5E349E3777A535242BC8C8F2978()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "Finished_3AC3E5E349E3777A535242BC8C8F2978");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_3");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_3 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_4");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_4 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_5");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_Disengage_K2Node_EnhancedInputActionEvent_5 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_0(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_0");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_0 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_1");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_1 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FInputActionValue                ActionValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                                   ElapsedTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   TriggeredTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                     SourceAction                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_2");

	Params::WBP_Cooking_Minigames_PF_C_InpActEvt_IA_Cooking_MinigameAction_K2Node_EnhancedInputActionEvent_2 Parms{};

	Parms.ActionValue = std::move(ActionValue);
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;
	Parms.SourceAction = SourceAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.SelectMinigameOnPlayingAndShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::SelectMinigameOnPlayingAndShow(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "SelectMinigameOnPlayingAndShow");

	Params::WBP_Cooking_Minigames_PF_C_SelectMinigameOnPlayingAndShow Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.SelectWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_MinigameQTE_Base_C*          NewWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          CallFunc_GetActiveWidget_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_MinigameQTE_Base_C*          K2Node_DynamicCast_AsWBP_Minigame_QTE_Base             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Cooking_Minigames_PF_C::SelectWidget(class UWBP_MinigameQTE_Base_C* NewWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_MinigameQTE_Base_C* K2Node_DynamicCast_AsWBP_Minigame_QTE_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "SelectWidget");

	Params::WBP_Cooking_Minigames_PF_C_SelectWidget Parms{};

	Parms.NewWidget = NewWidget;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Minigame_QTE_Base = K2Node_DynamicCast_AsWBP_Minigame_QTE_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Cooking_Minigames_PF.WBP_Cooking_Minigames_PF_C.ShowMinigame
// (BlueprintCallable, BlueprintEvent)

void UWBP_Cooking_Minigames_PF_C::ShowMinigame()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Cooking_Minigames_PF_C", "ShowMinigame");

	UObject::ProcessEvent(Func, nullptr);
}

}

