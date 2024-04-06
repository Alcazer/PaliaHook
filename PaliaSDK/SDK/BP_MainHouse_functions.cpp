#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_MainHouse

#include "Basic.hpp"

#include "BP_MainHouse_classes.hpp"
#include "BP_MainHouse_parameters.hpp"


namespace SDK
{

// Function BP_MainHouse.BP_MainHouse_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)

void ABP_MainHouse_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "CustomEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void ABP_MainHouse_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.DayNightEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsNight                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainHouse_C::DayNightEvent(bool bIsNight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "DayNightEvent");

	Params::BP_MainHouse_C_DayNightEvent Parms{};

	Parms.bIsNight = bIsNight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_MainHouse.BP_MainHouse_C.ExecuteUbergraph_BP_MainHouse
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    K2Node_CustomEvent_bIsNight                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       K2Node_CreateDelegate_OutputDelegate                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                     CallFunc_K2_SetTimerDelegate_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsServer_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Temp_int_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_IsVisible_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaWeather*                  CallFunc_GetWorldSubsystem_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValEnvironmentManager*           CallFunc_GetCurrentEnvManager_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TDelegate<void(bool bIsNight)>          K2Node_CreateDelegate_OutputDelegate_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_GetIsNightTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>          CallFunc_GetChildrenComponents_Children                (ReferenceParm, ContainsInstancedReference)
// TArray<class USceneComponent*>          CallFunc_GetChildrenComponents_Children_1              (ReferenceParm, ContainsInstancedReference)
// int32                                   CallFunc_Array_Length_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_NotEqual_IntInt_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_Conv_FloatToVector_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*                  CallFunc_Array_Get_Item                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                                   CallFunc_Add_IntInt_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           CallFunc_Conv_IntToString_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// struct FRotator                         CallFunc_RInterpTo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CallFunc_EqualEqual_RotatorRotator_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CallFunc_VInterpTo_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeRotation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                                    CallFunc_EqualEqual_VectorVector_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CallFunc_BooleanAND_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       CallFunc_K2_SetRelativeLocation_SweepHitResult         (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MainHouse_C::ExecuteUbergraph_BP_MainHouse(int32 EntryPoint, bool K2Node_CustomEvent_bIsNight, TDelegate<void()> K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, int32 Temp_int_Variable, bool CallFunc_IsVisible_ReturnValue, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, TDelegate<void(bool bIsNight)> K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_GetIsNightTime_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_EqualEqual_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "ExecuteUbergraph_BP_MainHouse");

	Params::BP_MainHouse_C_ExecuteUbergraph_BP_MainHouse Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_bIsNight = K2Node_CustomEvent_bIsNight;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(CallFunc_K2_SetTimerDelegate_ReturnValue);
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentEnvManager_ReturnValue = CallFunc_GetCurrentEnvManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetIsNightTime_ReturnValue = CallFunc_GetIsNightTime_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = std::move(CallFunc_GetChildrenComponents_Children);
	Parms.CallFunc_GetChildrenComponents_Children_1 = std::move(CallFunc_GetChildrenComponents_Children_1);
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = std::move(CallFunc_Conv_FloatToVector_ReturnValue);
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = std::move(CallFunc_Conv_IntToString_ReturnValue);
	Parms.CallFunc_RInterpTo_ReturnValue = std::move(CallFunc_RInterpTo_ReturnValue);
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = std::move(CallFunc_VInterpTo_ReturnValue);
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = std::move(CallFunc_K2_SetRelativeRotation_SweepHitResult);
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(CallFunc_K2_SetRelativeLocation_SweepHitResult);

	UObject::ProcessEvent(Func, &Parms);

	CallFunc_GetChildrenComponents_Children = std::move(Parms.CallFunc_GetChildrenComponents_Children);
	CallFunc_GetChildrenComponents_Children_1 = std::move(Parms.CallFunc_GetChildrenComponents_Children_1);
}


// Function BP_MainHouse.BP_MainHouse_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_MainHouse_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.Timeline__FinishedFunc
// (BlueprintEvent)

void ABP_MainHouse_C::Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "Timeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.Timeline__UpdateFunc
// (BlueprintEvent)

void ABP_MainHouse_C::Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "Timeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.turnOff
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_MainHouse_C::TurnOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "turnOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_MainHouse.BP_MainHouse_C.turnOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_TurnOn                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MainHouse_C::TurnOn(bool Param_TurnOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_MainHouse_C", "turnOn");

	Params::BP_MainHouse_C_TurnOn Parms{};

	Parms.Param_TurnOn = Param_TurnOn;

	UObject::ProcessEvent(Func, &Parms);
}

}

