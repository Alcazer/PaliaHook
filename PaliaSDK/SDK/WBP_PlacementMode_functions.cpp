#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WBP_PlacementMode

#include "Basic.hpp"

#include "WBP_PlacementMode_classes.hpp"
#include "WBP_PlacementMode_parameters.hpp"


namespace SDK
{

// Function WBP_PlacementMode.WBP_PlacementMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlacementMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlacementMode_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.ExecuteUbergraph_WBP_PlacementMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        Temp_byte_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UPlacementComponent* PC)>K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlacementComponent*              CallFunc_GetPlacement_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AValeriaCharacter* Character, bool Flag)>K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AValeriaCharacter* Character, bool Flag)>K2Node_CreateDelegate_OutputDelegate_2                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlacementComponent*              CallFunc_GetPlacement_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class UPlacementComponent* PC)>K2Node_CreateDelegate_OutputDelegate_3                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AValeriaCharacter* Character, bool Flag)>K2Node_CreateDelegate_OutputDelegate_4                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(ECommonInputType bNewInputType)>K2Node_CreateDelegate_OutputDelegate_5                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(class AValeriaCharacter* Character, bool Flag)>K2Node_CreateDelegate_OutputDelegate_6                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_CustomEvent_InVisibility                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(ESlateVisibility InVisibility)>K2Node_CreateDelegate_OutputDelegate_7                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EValeriaFuncResult                      CallFunc_GetValeriaCharacter_OutResult_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*                CallFunc_GetValeriaCharacter_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlacementComponent*              CallFunc_GetPlacement_ReturnValue_2                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsPlacementMoveModifierActive_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>CallFunc_GetItemTypeToPlace_ReturnValue                (UObjectWrapper, HasGetValueTypeHash)
// bool                                    CallFunc_IsPlacementPickupModeActive_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*            CallFunc_GetLocalPlayerSubsystem_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        CallFunc_GetVisibility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ECommonInputType                        K2Node_CustomEvent_bNewInputType                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_SwitchEnum_CmpSuccess_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Set_Item_Definition_Displays                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESlateVisibility                        K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::ExecuteUbergraph_WBP_PlacementMode(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TDelegate<void(class UPlacementComponent* PC)> K2Node_CreateDelegate_OutputDelegate, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TDelegate<void(class AValeriaCharacter* Character, bool Flag)> K2Node_CreateDelegate_OutputDelegate_1, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_1, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_1, TDelegate<void(class AValeriaCharacter* Character, bool Flag)> K2Node_CreateDelegate_OutputDelegate_2, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, TDelegate<void(class UPlacementComponent* PC)> K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Variable, TDelegate<void(class AValeriaCharacter* Character, bool Flag)> K2Node_CreateDelegate_OutputDelegate_4, TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate_5, TDelegate<void(class AValeriaCharacter* Character, bool Flag)> K2Node_CreateDelegate_OutputDelegate_6, ESlateVisibility K2Node_CustomEvent_InVisibility, bool K2Node_SwitchEnum_CmpSuccess_2, TDelegate<void(ESlateVisibility InVisibility)> K2Node_CreateDelegate_OutputDelegate_7, EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult_2, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue_2, class UPlacementComponent* CallFunc_GetPlacement_ReturnValue_2, bool CallFunc_IsPlacementMoveModifierActive_ReturnValue, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> CallFunc_GetItemTypeToPlace_ReturnValue, bool CallFunc_IsPlacementPickupModeActive_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, ECommonInputType K2Node_CustomEvent_bNewInputType, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_Set_Item_Definition_Displays, ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "ExecuteUbergraph_WBP_PlacementMode");

	Params::WBP_PlacementMode_C_ExecuteUbergraph_WBP_PlacementMode Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetPlacement_ReturnValue = CallFunc_GetPlacement_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetValeriaCharacter_OutResult_1 = CallFunc_GetValeriaCharacter_OutResult_1;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_1 = CallFunc_GetValeriaCharacter_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetPlacement_ReturnValue_1 = CallFunc_GetPlacement_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetValeriaCharacter_OutResult_2 = CallFunc_GetValeriaCharacter_OutResult_2;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue_2 = CallFunc_GetValeriaCharacter_ReturnValue_2;
	Parms.CallFunc_GetPlacement_ReturnValue_2 = CallFunc_GetPlacement_ReturnValue_2;
	Parms.CallFunc_IsPlacementMoveModifierActive_ReturnValue = CallFunc_IsPlacementMoveModifierActive_ReturnValue;
	Parms.CallFunc_GetItemTypeToPlace_ReturnValue = CallFunc_GetItemTypeToPlace_ReturnValue;
	Parms.CallFunc_IsPlacementPickupModeActive_ReturnValue = CallFunc_IsPlacementPickupModeActive_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_CustomEvent_bNewInputType = K2Node_CustomEvent_bNewInputType;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_Set_Item_Definition_Displays = CallFunc_Set_Item_Definition_Displays;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.On Visibility Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::On_Visibility_Changed(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "On Visibility Changed");

	Params::WBP_PlacementMode_C_On_Visibility_Changed Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.OnInputMethodChanged_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::OnInputMethodChanged_Event(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "OnInputMethodChanged_Event");

	Params::WBP_PlacementMode_C_OnInputMethodChanged_Event Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.UpdateFreePlacementIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlacementComponent*              PlacementComponent                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsFreePlacementModeActive_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::UpdateFreePlacementIcon(class UPlacementComponent* PlacementComponent, bool Temp_bool_Variable, bool CallFunc_IsFreePlacementModeActive_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "UpdateFreePlacementIcon");

	Params::WBP_PlacementMode_C_UpdateFreePlacementIcon Parms{};

	Parms.PlacementComponent = PlacementComponent;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsFreePlacementModeActive_ReturnValue = CallFunc_IsFreePlacementModeActive_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.UpdateGridLockIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::UpdateGridLockIcon(class AValeriaCharacter* Character, bool Flag, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "UpdateGridLockIcon");

	Params::WBP_PlacementMode_C_UpdateGridLockIcon Parms{};

	Parms.Character = Character;
	Parms.Flag = Flag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlacementMode.WBP_PlacementMode_C.UpdatePlacementModeIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*                Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Flag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Temp_bool_Variable_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   K2Node_Select_Default_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlacementMode_C::UpdatePlacementModeIcon(class AValeriaCharacter* Character, bool Flag, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlacementMode_C", "UpdatePlacementModeIcon");

	Params::WBP_PlacementMode_C_UpdatePlacementModeIcon Parms{};

	Parms.Character = Character;
	Parms.Flag = Flag;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);
}

}

