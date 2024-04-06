#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CosmeticItemTooltip

#include "Basic.hpp"

#include "WBP_CosmeticItemTooltip_classes.hpp"
#include "WBP_CosmeticItemTooltip_parameters.hpp"


namespace SDK
{

// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.DisplayDebugTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             CallFunc_Conv_NameToText_ReturnValue                   ()

void UWBP_CosmeticItemTooltip_C::DisplayDebugTooltip(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "DisplayDebugTooltip");

	Params::WBP_CosmeticItemTooltip_C_DisplayDebugTooltip Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.DisplayTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SetDisplayName                                         (Edit, BlueprintVisible)
// class FText                             CallFunc_GetSetTagName_SetText                         ()
// bool                                    CallFunc_TextIsEmpty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_TextIsEmpty_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::DisplayTooltip(class FText SetDisplayName, class FText CallFunc_GetSetTagName_SetText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "DisplayTooltip");

	Params::WBP_CosmeticItemTooltip_C_DisplayTooltip Parms{};

	Parms.SetDisplayName = SetDisplayName;
	Parms.CallFunc_GetSetTagName_SetText = CallFunc_GetSetTagName_SetText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.ExecuteUbergraph_WBP_CosmeticItemTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UObject* Loaded)>  K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_FNameIsNone_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          K2Node_CustomEvent_Loaded                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          Temp_object_Variable                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                       K2Node_DynamicCast_AsData_Table                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::ExecuteUbergraph_WBP_CosmeticItemTooltip(int32 EntryPoint, TDelegate<void(class UObject* Loaded)> K2Node_CreateDelegate_OutputDelegate, bool CallFunc_FNameIsNone_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, class UDataTable* K2Node_DynamicCast_AsData_Table, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "ExecuteUbergraph_WBP_CosmeticItemTooltip");

	Params::WBP_CosmeticItemTooltip_C_ExecuteUbergraph_WBP_CosmeticItemTooltip Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsData_Table = K2Node_DynamicCast_AsData_Table;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.GetSetTagName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SetText                                                (Parm, OutParm)
// int32                                   Temp_int_Array_Index_Variable                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Loop_Counter_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomization_CosmeticTagFilterStructCallFunc_Array_Get_Item                                ()
// bool                                    CallFunc_Less_IntInt_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::GetSetTagName(class FText* SetText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "GetSetTagName");

	Params::WBP_CosmeticItemTooltip_C_GetSetTagName Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = std::move(CallFunc_Array_Get_Item);
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SetText != nullptr)
		*SetText = Parms.SetText;
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.InitAdditionalText
// (BlueprintCallable, BlueprintEvent)

void UWBP_CosmeticItemTooltip_C::InitAdditionalText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "InitAdditionalText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.InitializeFromAssetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_CharCustomization_AssetData Param_Asset_Data                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    CallFunc_GetConsoleVariableBoolValue_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::InitializeFromAssetData(const struct FVAL_CharCustomization_AssetData& Param_Asset_Data, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "InitializeFromAssetData");

	Params::WBP_CosmeticItemTooltip_C_InitializeFromAssetData Parms{};

	Parms.Param_Asset_Data = std::move(Param_Asset_Data);
	Parms.CallFunc_GetConsoleVariableBoolValue_ReturnValue = CallFunc_GetConsoleVariableBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.OnLoaded_EE5957764FD030C1FA456182951557D5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::OnLoaded_EE5957764FD030C1FA456182951557D5(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "OnLoaded_EE5957764FD030C1FA456182951557D5");

	Params::WBP_CosmeticItemTooltip_C_OnLoaded_EE5957764FD030C1FA456182951557D5 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetAdditionalTextFromAssetAndDataTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                       DataTable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_NameToString_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue_1                   (ZeroConstructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomization_TooltipDataRowCallFunc_GetDataTableRowFromName_OutRow                ()
// bool                                    CallFunc_GetDataTableRowFromName_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::SetAdditionalTextFromAssetAndDataTable(class UDataTable* DataTable, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FVAL_CharacterCustomization_TooltipDataRow& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "SetAdditionalTextFromAssetAndDataTable");

	Params::WBP_CosmeticItemTooltip_C_SetAdditionalTextFromAssetAndDataTable Parms{};

	Parms.DataTable = DataTable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = std::move(CallFunc_Conv_NameToString_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = std::move(CallFunc_Concat_StrStr_ReturnValue_1);
	Parms.CallFunc_GetDataTableRowFromName_OutRow = std::move(CallFunc_GetDataTableRowFromName_OutRow);
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetItemName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CosmeticItemTooltip_C::SetItemName(class FText New_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "SetItemName");

	Params::WBP_CosmeticItemTooltip_C_SetItemName Parms{};

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.SetSetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             New_Text                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CosmeticItemTooltip_C::SetSetName(class FText New_Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "SetSetName");

	Params::WBP_CosmeticItemTooltip_C_SetSetName Parms{};

	Parms.New_Text = New_Text;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CosmeticItemTooltip.WBP_CosmeticItemTooltip_C.Show Set Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CosmeticItemTooltip_C::Show_Set_Name(bool Param_Visibility, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CosmeticItemTooltip_C", "Show Set Name");

	Params::WBP_CosmeticItemTooltip_C_Show_Set_Name Parms{};

	Parms.Param_Visibility = Param_Visibility;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}

}

