#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_RequestStatusIndicator

#include "Basic.hpp"

#include "WBP_RequestStatusIndicator_classes.hpp"
#include "WBP_RequestStatusIndicator_parameters.hpp"


namespace SDK
{

// Function WBP_RequestStatusIndicator.WBP_RequestStatusIndicator_C.FormatTimespan
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                        Timespan                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             Result                                                 (Parm, OutParm)
// float                                   CallFunc_GetTotalHours_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_GetMinutes_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_FTrunc_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Max_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Max_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_Conv_IntToText_ReturnValue                    ()
// class FText                             CallFunc_Conv_IntToText_ReturnValue_1                  ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData_1                 (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// double                                  CallFunc_FTrunc_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RequestStatusIndicator_C::FormatTimespan(const struct FTimespan& Timespan, class FText* Result, float CallFunc_GetTotalHours_ReturnValue, int32 CallFunc_GetMinutes_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Max_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RequestStatusIndicator_C", "FormatTimespan");

	Params::WBP_RequestStatusIndicator_C_FormatTimespan Parms{};

	Parms.Timespan = std::move(Timespan);
	Parms.CallFunc_GetTotalHours_ReturnValue = CallFunc_GetTotalHours_ReturnValue;
	Parms.CallFunc_GetMinutes_ReturnValue = CallFunc_GetMinutes_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = std::move(K2Node_MakeStruct_FormatArgumentData_1);
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WBP_RequestStatusIndicator.WBP_RequestStatusIndicator_C.UpdateRemainingTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                        Param_RemainingTime                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RequestStatusIndicator_C::UpdateRemainingTime(const struct FTimespan& Param_RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RequestStatusIndicator_C", "UpdateRemainingTime");

	Params::WBP_RequestStatusIndicator_C_UpdateRemainingTime Parms{};

	Parms.Param_RemainingTime = std::move(Param_RemainingTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_RequestStatusIndicator.WBP_RequestStatusIndicator_C.UpdateStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EInventoryRequestStatus                 Param_Status                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        Param_RemainingTime                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             CallFunc_FormatTimespan_Result                         ()
// struct FFormatArgumentData              K2Node_MakeStruct_FormatArgumentData                   (HasGetValueTypeHash)
// bool                                    CallFunc_Less_TimespanTimespan_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData>      K2Node_MakeArray_Array                                 (ReferenceParm)
// class FText                             CallFunc_Format_ReturnValue                            ()
// class FText                             CallFunc_FormatTimespan_Result_1                       ()
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_Select_Default_2                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          K2Node_Select_Default_3                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                        CallFunc_MakeTimespan_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                             K2Node_Select_Default_4                                ()
// bool                                    CallFunc_Greater_TimespanTimespan_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TextBlockStyle*            K2Node_Select_Default_5                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RequestStatusIndicator_C::UpdateStatus(EInventoryRequestStatus Param_Status, const struct FTimespan& Param_RemainingTime, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class FText CallFunc_FormatTimespan_Result, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Less_TimespanTimespan_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText CallFunc_FormatTimespan_Result_1, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, class UWidget* K2Node_Select_Default_2, class UWidget* K2Node_Select_Default_3, bool Temp_bool_Variable_4, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, class FText K2Node_Select_Default_4, bool CallFunc_Greater_TimespanTimespan_ReturnValue, bool Temp_bool_Variable_5, class UVALUI_TextBlockStyle* K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_RequestStatusIndicator_C", "UpdateStatus");

	Params::WBP_RequestStatusIndicator_C_UpdateStatus Parms{};

	Parms.Param_Status = Param_Status;
	Parms.Param_RemainingTime = std::move(Param_RemainingTime);
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_FormatTimespan_Result = CallFunc_FormatTimespan_Result;
	Parms.K2Node_MakeStruct_FormatArgumentData = std::move(K2Node_MakeStruct_FormatArgumentData);
	Parms.CallFunc_Less_TimespanTimespan_ReturnValue = CallFunc_Less_TimespanTimespan_ReturnValue;
	Parms.K2Node_MakeArray_Array = std::move(K2Node_MakeArray_Array);
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FormatTimespan_Result_1 = CallFunc_FormatTimespan_Result_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_MakeTimespan_ReturnValue = std::move(CallFunc_MakeTimespan_ReturnValue);
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Greater_TimespanTimespan_ReturnValue = CallFunc_Greater_TimespanTimespan_ReturnValue;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

	K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);
}

}
