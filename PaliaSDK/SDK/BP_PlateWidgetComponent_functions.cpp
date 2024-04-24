#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_PlateWidgetComponent

#include "Basic.hpp"

#include "BP_PlateWidgetComponent_classes.hpp"
#include "BP_PlateWidgetComponent_parameters.hpp"


namespace SDK
{

// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ActivateVisibilityTimer
// (BlueprintCallable, BlueprintEvent)

void UBP_PlateWidgetComponent_C::ActivateVisibilityTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "ActivateVisibilityTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.CheckAndSetVisibility
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UBP_PlateWidgetComponent_C::CheckAndSetVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "CheckAndSetVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.CheckWidgetCreation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*                    CallFunc_GetGameInstance_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_GetUserWidgetObject_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsValid_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_GetUserWidgetObject_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_PlateWidgetComponent_C::CheckWidgetCreation(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "CheckWidgetCreation");

	Params::BP_PlateWidgetComponent_C_CheckWidgetCreation Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ExecuteUbergraph_BP_PlateWidgetComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_DisableIfServer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CallFunc_RandomFloatInRange_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   K2Node_Event_DeltaSeconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      CallFunc_GetUserWidgetObject_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetIsVisibleToPlayer_IsVisible                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_Delay_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlateWidgetComponent_C::ExecuteUbergraph_BP_PlateWidgetComponent(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DisableIfServer_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, float K2Node_Event_DeltaSeconds, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, bool CallFunc_GetIsVisibleToPlayer_IsVisible, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "ExecuteUbergraph_BP_PlateWidgetComponent");

	Params::BP_PlateWidgetComponent_C_ExecuteUbergraph_BP_PlateWidgetComponent Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DisableIfServer_ReturnValue = CallFunc_DisableIfServer_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.CallFunc_GetIsVisibleToPlayer_IsVisible = CallFunc_GetIsVisibleToPlayer_IsVisible;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.On Widget Created
// (BlueprintCallable, BlueprintEvent)

void UBP_PlateWidgetComponent_C::On_Widget_Created()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "On Widget Created");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_PlateWidgetComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlateWidgetComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "ReceiveTick");

	Params::BP_PlateWidgetComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.SetShouldPlateBeVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsDedicatedServer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_Not_PreBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlateWidgetComponent_C::SetShouldPlateBeVisible(bool Param_IsVisible, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "SetShouldPlateBeVisible");

	Params::BP_PlateWidgetComponent_C_SetShouldPlateBeVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlateWidgetComponent.BP_PlateWidgetComponent_C.ShouldPlateBeVisible
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_ShouldPlateBeVisible_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PlateWidgetComponent_C::ShouldPlateBeVisible(bool CallFunc_ShouldPlateBeVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlateWidgetComponent_C", "ShouldPlateBeVisible");

	Params::BP_PlateWidgetComponent_C_ShouldPlateBeVisible Parms{};

	Parms.CallFunc_ShouldPlateBeVisible_ReturnValue = CallFunc_ShouldPlateBeVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

