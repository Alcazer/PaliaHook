#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_CharacterActionToolUse_Console

#include "Basic.hpp"

#include "WBP_CharacterActionToolUse_Console_classes.hpp"
#include "WBP_CharacterActionToolUse_Console_parameters.hpp"


namespace SDK
{

// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*                Button                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterActionToolUse_Console_C::BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::WBP_CharacterActionToolUse_Console_C_BndEvt__WBP_CharacterActionToolUse_Console_Button_CM_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CharacterActionToolUse_Console_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.ExecuteUbergraph_WBP_CharacterActionToolUse_Console
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*              K2Node_CustomEvent_Inventory                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                     CallFunc_GetEquippedItem_ReturnValue                   ()
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*              CallFunc_GetEquipment_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentComponent*              K2Node_CustomEvent_EquipmentComponent                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem                   K2Node_CustomEvent_Item                                ()
// TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ItemEquals_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UInventoryComponent* Inventory)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*               CallFunc_PlayAnimation_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*                K2Node_ComponentBoundEvent_Button                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterActionToolUse_Console_C::ExecuteUbergraph_WBP_CharacterActionToolUse_Console(int32 EntryPoint, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, class UInventoryComponent* K2Node_CustomEvent_Inventory, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, class UEquipmentComponent* CallFunc_GetEquipment_ReturnValue, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UEquipmentComponent* K2Node_CustomEvent_EquipmentComponent, const struct FEquipmentItem& K2Node_CustomEvent_Item, TDelegate<void(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_ItemEquals_ReturnValue, TDelegate<void(class UInventoryComponent* Inventory)> K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "ExecuteUbergraph_WBP_CharacterActionToolUse_Console");

	Params::WBP_CharacterActionToolUse_Console_C_ExecuteUbergraph_WBP_CharacterActionToolUse_Console Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = std::move(CallFunc_GetEquippedItem_ReturnValue);
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetValeriaCharacter_OutResult_1 = CallFunc_GetValeriaCharacter_OutResult_1;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_1 = CallFunc_GetValeriaCharacter_ReturnValue_1;
	Parms.CallFunc_GetEquipment_ReturnValue = CallFunc_GetEquipment_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CustomEvent_EquipmentComponent = K2Node_CustomEvent_EquipmentComponent;
	Parms.K2Node_CustomEvent_Item = std::move(K2Node_CustomEvent_Item);
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_ItemEquals_ReturnValue = CallFunc_ItemEquals_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleEquipmentChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentComponent*              EquipmentComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentItem                   Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_CharacterActionToolUse_Console_C::HandleEquipmentChanged(class UEquipmentComponent* EquipmentComponent, const struct FEquipmentItem& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "HandleEquipmentChanged");

	Params::WBP_CharacterActionToolUse_Console_C_HandleEquipmentChanged Parms{};

	Parms.EquipmentComponent = EquipmentComponent;
	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleEquippedItemUpdate
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CallFunc_SetTool_IsVisible                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          CallFunc_LoadAsset_Blocking_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*     K2Node_DynamicCast_AsItem_Type_Definition              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_DynamicCast_bSuccess                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_EqualEqual_ByteByte_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterActionToolUse_Console_C::HandleEquippedItemUpdate(bool CallFunc_SetTool_IsVisible, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "HandleEquippedItemUpdate");

	Params::WBP_CharacterActionToolUse_Console_C_HandleEquippedItemUpdate Parms{};

	Parms.CallFunc_SetTool_IsVisible = CallFunc_SetTool_IsVisible;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = K2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.HandleOnChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent*              Inventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterActionToolUse_Console_C::HandleOnChanged(class UInventoryComponent* Inventory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "HandleOnChanged");

	Params::WBP_CharacterActionToolUse_Console_C_HandleOnChanged Parms{};

	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.OnReleasedEffect
// (BlueprintCallable, BlueprintEvent)

void UWBP_CharacterActionToolUse_Console_C::OnReleasedEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "OnReleasedEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.OnReleasedEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_CharacterActionToolUse_Console_C::OnReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "OnReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CharacterActionToolUse_Console.WBP_CharacterActionToolUse_Console_C.UpdateCurrentEquipped
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBagSlotLocation                 InventorySlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerInventoryComponent*        CallFunc_GetInventory_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                     CallFunc_GetItemAt_ReturnValue                         ()
// bool                                    CallFunc_ItemEquals_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CharacterActionToolUse_Console_C::UpdateCurrentEquipped(const struct FBagSlotLocation& InventorySlot, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerInventoryComponent* CallFunc_GetInventory_ReturnValue, const struct FValeriaItem& CallFunc_GetItemAt_ReturnValue, bool CallFunc_ItemEquals_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CharacterActionToolUse_Console_C", "UpdateCurrentEquipped");

	Params::WBP_CharacterActionToolUse_Console_C_UpdateCurrentEquipped Parms{};

	Parms.InventorySlot = std::move(InventorySlot);
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItemAt_ReturnValue = std::move(CallFunc_GetItemAt_ReturnValue);
	Parms.CallFunc_ItemEquals_ReturnValue = CallFunc_ItemEquals_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

