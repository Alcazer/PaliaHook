#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_GearUtils_CM

#include "Basic.hpp"

#include "BP_GearUtils_CM_classes.hpp"
#include "BP_GearUtils_CM_parameters.hpp"


namespace SDK
{

// Function BP_GearUtils_CM.BP_GearUtils_CM_C.UnequipGear
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*                OwningPlayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGearComponent*                   GearComponent                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGearSlotTypeConfig*              SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FBagSlotLocation                 DesiredSlot                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   IndexWithinType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                          Widget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      PopUpWidget                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Template_Button_CM_C*>Buttons                                                (Edit, BlueprintVisible, ContainsInstancedReference)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*            CallFunc_GetCommonInputSystem_ReturnValue              (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        CallFunc_GetCurrentInputType_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue_1              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable                                     (ConstParm)
// bool                                    CallFunc_EqualEqual_ObjectObject_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_PinRemoveConfirmModal_CM_C*  CallFunc_Create_ReturnValue                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*        CallFunc_GetUIManagerWidget_ReturnValue_2              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EGearChangeResult                       CallFunc_CanRemoveGearBySlotType_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SimpleModalDialog_PF_C*      CallFunc_Create_ReturnValue_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_SimpleModalDialog_CM_C*      CallFunc_Create_ReturnValue_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                             Temp_text_Variable_1                                   (ConstParm)

void UBP_GearUtils_CM_C::UnequipGear(class APlayerController* OwningPlayer, class UGearComponent* GearComponent, class UGearSlotTypeConfig* SlotType, const struct FBagSlotLocation& DesiredSlot, int32 IndexWithinType, class UObject* __WorldContext, class UWidget** Widget, class UUserWidget* PopUpWidget, const TArray<class UWBP_Template_Button_CM_C*>& Buttons, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, class UCommonInputSubsystem* CallFunc_GetCommonInputSystem_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_1, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWBP_PinRemoveConfirmModal_CM_C* CallFunc_Create_ReturnValue, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue_2, EGearChangeResult CallFunc_CanRemoveGearBySlotType_ReturnValue, class UWBP_SimpleModalDialog_PF_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UWBP_SimpleModalDialog_CM_C* CallFunc_Create_ReturnValue_2, class FText Temp_text_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_GearUtils_CM_C", "UnequipGear");

	Params::BP_GearUtils_CM_C_UnequipGear Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.GearComponent = GearComponent;
	Parms.SlotType = SlotType;
	Parms.DesiredSlot = std::move(DesiredSlot);
	Parms.IndexWithinType = IndexWithinType;
	Parms.__WorldContext = __WorldContext;
	Parms.PopUpWidget = PopUpWidget;
	Parms.Buttons = std::move(Buttons);
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetCommonInputSystem_ReturnValue = CallFunc_GetCommonInputSystem_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue_1 = CallFunc_GetUIManagerWidget_ReturnValue_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue_2 = CallFunc_GetUIManagerWidget_ReturnValue_2;
	Parms.CallFunc_CanRemoveGearBySlotType_ReturnValue = CallFunc_CanRemoveGearBySlotType_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;
}

}
