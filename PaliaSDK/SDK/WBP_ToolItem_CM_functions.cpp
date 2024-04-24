#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_ToolItem_CM

#include "Basic.hpp"

#include "WBP_ToolItem_CM_classes.hpp"
#include "WBP_ToolItem_CM_parameters.hpp"


namespace SDK
{

// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.CanOpenTooltip
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanOpen                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::CanOpenTooltip(bool* CanOpen, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "CanOpenTooltip");

	Params::WBP_ToolItem_CM_C_CanOpenTooltip Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanOpen != nullptr)
		*CanOpen = Parms.CanOpen;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.CloseTooltip
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ToolItem_CM_C::CloseTooltip()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "CloseTooltip");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_ToolItem_CM_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.ExecuteUbergraph_WBP_ToolItem_CM
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                        K2Node_Event_MyGeometry                                (IsPlainOldData, NoDestructor)
// struct FPointerEvent                    K2Node_Event_MouseEvent_1                              (ConstParm)
// struct FPointerEvent                    K2Node_Event_MouseEvent                                (ConstParm)

void UWBP_ToolItem_CM_C::ExecuteUbergraph_WBP_ToolItem_CM(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, struct FPointerEvent& K2Node_Event_MouseEvent_1, struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "ExecuteUbergraph_WBP_ToolItem_CM");

	Params::WBP_ToolItem_CM_C_ExecuteUbergraph_WBP_ToolItem_CM Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = std::move(K2Node_Event_MyGeometry);
	Parms.K2Node_Event_MouseEvent_1 = std::move(K2Node_Event_MouseEvent_1);
	Parms.K2Node_Event_MouseEvent = std::move(K2Node_Event_MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.GetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FValeriaItem                     Param_Item                                             (Parm, OutParm)

void UWBP_ToolItem_CM_C::GetItem(struct FValeriaItem* Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "GetItem");

	Params::WBP_ToolItem_CM_C_GetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Item != nullptr)
		*Param_Item = std::move(Parms.Param_Item);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.GetPlayerItemAmount
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStarQualityConstraint           Temp_struct_Variable                                   (ConstParm, NoDestructor)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_K2_GetItemAmountByType_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::GetPlayerItemAmount(int32* Amount, struct FStarQualityConstraint& Temp_struct_Variable, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, int32 CallFunc_K2_GetItemAmountByType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "GetPlayerItemAmount");

	Params::WBP_ToolItem_CM_C_GetPlayerItemAmount Parms{};

	Parms.Temp_struct_Variable = std::move(Temp_struct_Variable);
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_K2_GetItemAmountByType_ReturnValue = CallFunc_K2_GetItemAmountByType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.GetStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVALUI_ItemStyle*                 Param_Style                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::GetStyle(class UVALUI_ItemStyle** Param_Style)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "GetStyle");

	Params::WBP_ToolItem_CM_C_GetStyle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Style != nullptr)
		*Param_Style = Parms.Param_Style;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.GetTooltipWidget
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UWBP_ToolItem_CM_C::GetTooltipWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "GetTooltipWidget");

	Params::WBP_ToolItem_CM_C_GetTooltipWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OnDurabilityUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FValeriaItem                     Param_Item                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ToolItem_CM_C::OnDurabilityUpdated__DelegateSignature(const struct FValeriaItem& Param_Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OnDurabilityUpdated__DelegateSignature");

	Params::WBP_ToolItem_CM_C_OnDurabilityUpdated__DelegateSignature Parms{};

	Parms.Param_Item = std::move(Param_Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OnItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ToolItem_CM_C::OnItemChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OnItemChanged__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ToolItem_CM_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OnMouseEnter");

	Params::WBP_ToolItem_CM_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ToolItem_CM_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OnMouseLeave");

	Params::WBP_ToolItem_CM_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OnWaterUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  WaterPercent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_ShouldDisplayWater                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::OnWaterUpdated__DelegateSignature(double WaterPercent, bool Param_ShouldDisplayWater)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OnWaterUpdated__DelegateSignature");

	Params::WBP_ToolItem_CM_C_OnWaterUpdated__DelegateSignature Parms{};

	Parms.WaterPercent = WaterPercent;
	Parms.Param_ShouldDisplayWater = Param_ShouldDisplayWater;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.OpenTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_CanOpenTooltip_CanOpen                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::OpenTooltip(bool CallFunc_CanOpenTooltip_CanOpen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "OpenTooltip");

	Params::WBP_ToolItem_CM_C_OpenTooltip Parms{};

	Parms.CallFunc_CanOpenTooltip_CanOpen = CallFunc_CanOpenTooltip_CanOpen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.SetStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_ItemStyle*                 NewStyle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_ObjectObject_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::SetStyle(class UVALUI_ItemStyle* NewStyle, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "SetStyle");

	Params::WBP_ToolItem_CM_C_SetStyle Parms{};

	Parms.NewStyle = NewStyle;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.SetTool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FValeriaItem                     NewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    Param_IsVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_UpdateTool_AnythingVisible                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::SetTool(const struct FValeriaItem& NewItem, bool* Param_IsVisible, bool CallFunc_UpdateTool_AnythingVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "SetTool");

	Params::WBP_ToolItem_CM_C_SetTool Parms{};

	Parms.NewItem = std::move(NewItem);
	Parms.CallFunc_UpdateTool_AnythingVisible = CallFunc_UpdateTool_AnythingVisible;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsVisible != nullptr)
		*Param_IsVisible = Parms.Param_IsVisible;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateAmmo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_ToolItem_CM_C::UpdateAmmo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateAmmo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateCapacity
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CallFunc_GetWaterPercent_percent                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetWaterPercent_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  K2Node_CallDelegate_WaterPercent_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::UpdateCapacity(float CallFunc_GetWaterPercent_percent, bool CallFunc_GetWaterPercent_ReturnValue, double K2Node_CallDelegate_WaterPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateCapacity");

	Params::WBP_ToolItem_CM_C_UpdateCapacity Parms{};

	Parms.CallFunc_GetWaterPercent_percent = CallFunc_GetWaterPercent_percent;
	Parms.CallFunc_GetWaterPercent_ReturnValue = CallFunc_GetWaterPercent_ReturnValue;
	Parms.K2Node_CallDelegate_WaterPercent_ImplicitCast = K2Node_CallDelegate_WaterPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateDurability
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_ToolItem_CM_C::UpdateDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateMainIcon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_IsValidSoftObjectReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::UpdateMainIcon(bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateMainIcon");

	Params::WBP_ToolItem_CM_C_UpdateMainIcon Parms{};

	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateStyle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_GetPathName_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// bool                                    CallFunc_UpdateTool_AnythingVisible                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Concat_StrStr_ReturnValue                     (ZeroConstructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::UpdateStyle(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, const class FString& CallFunc_GetPathName_ReturnValue, bool CallFunc_UpdateTool_AnythingVisible, const class FString& CallFunc_Concat_StrStr_ReturnValue, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateStyle");

	Params::WBP_ToolItem_CM_C_UpdateStyle Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetPathName_ReturnValue = std::move(CallFunc_GetPathName_ReturnValue);
	Parms.CallFunc_UpdateTool_AnythingVisible = CallFunc_UpdateTool_AnythingVisible;
	Parms.CallFunc_Concat_StrStr_ReturnValue = std::move(CallFunc_Concat_StrStr_ReturnValue);
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateTool
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AnythingVisible                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue  (UObjectWrapper, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_SoftObjectReference_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*     K2Node_DynamicCast_AsItem_Type_Definition              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_UpdateVisibility_bAnythingVisible             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_BoolBool_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::UpdateTool(bool* AnythingVisible, ESlateVisibility Temp_byte_Variable, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_NotEqual_SoftObjectReference_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_UpdateVisibility_bAnythingVisible, ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateTool");

	Params::WBP_ToolItem_CM_C_UpdateTool Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_NotEqual_SoftObjectReference_ReturnValue = CallFunc_NotEqual_SoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = K2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_UpdateVisibility_bAnythingVisible = CallFunc_UpdateVisibility_bAnythingVisible;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AnythingVisible != nullptr)
		*AnythingVisible = Parms.AnythingVisible;
}


// Function WBP_ToolItem_CM.WBP_ToolItem_CM_C.UpdateVisibility
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bAnythingVisible                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Temp_real_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValidSoftObjectReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Greater_IntInt_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_SetRenderOpacity_InOpacity_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolItem_CM_C::UpdateVisibility(bool* bAnythingVisible, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolItem_CM_C", "UpdateVisibility");

	Params::WBP_ToolItem_CM_C_UpdateVisibility Parms{};

	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bAnythingVisible != nullptr)
		*bAnythingVisible = Parms.bAnythingVisible;
}

}

